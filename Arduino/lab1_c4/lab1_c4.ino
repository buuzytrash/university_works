
#include <avr/io.h>
#include <util/delay.h>

void UART_init(unsigned int baud) {
    unsigned int ubrr = F_CPU/16/baud-1;
    UBRR0H = (unsigned char)(ubrr>>8);  // Установка скорости передачи
    UBRR0L = (unsigned char)ubrr;
    UCSR0B = (1<<TXEN0) | (1<<RXEN0);                // Включение передачи
    UCSR0C = (1<<UCSZ01) | (1<<UCSZ00); // Установка формата данных 8 бит
}

void UART_send(unsigned char data) {
    // Ждем, пока регистр данных USART будет готов к приему новых данных
    while (!(UCSR0A & (1 << UDRE0)));

    // Записываем данные в регистр данных USART
    UDR0 = data;
}

void transmit_string(const char *str) {
    // Передаем каждый символ строки через USART
    while (*str) {
        UART_send(*str++);
    }
}

char UART_receive() {
    while (!(UCSR0A & (1<<RXC0)));
    return UDR0;
}

void USART_Flush(void)
{
unsigned char dummy;
while (UCSR0A & (1<<RXC0)) dummy = UDR0;
}

int main(void) {
    // Инициализация USART 
    UART_init(31250);

    // Фамилии
    const char *student_surname = "AGAPITOV";

    while (1) {
        // Передаем фамилию студента через последовательный порт
        char recv = UART_receive();
        if (recv == 'S'){
          transmit_string(student_surname);

          transmit_string("\n");
          USART_Flush();
          // _delay_ms(2000);
        }
    }

    return 0;
}
