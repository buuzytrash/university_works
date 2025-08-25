#include <avr/io.h>
#include <util/delay.h>
void setup() {
  // Настройка серийного порта
  Serial.begin(9600);
  
  // Настройка таймера 1 для работы в нормальном режиме
  // TCCR1A = 15624; 
  TCCR1B |= (1 << CS12) | (1 << CS10);
  TCCR1B |= (1 << WGM12); 
  // TIMSK1 |= (1 << TOIE1);
  OCR1A = 15624;
  
  TCNT1 = 0; // Инициализация счетчика
}

void loop()
{
  if (TIFR1 & (1 << OCF1A)){
      Serial.println("Hello");
      PORTB ^= (1 << PORTB5);
      TIFR1 |= (1 << OCF1A);
    }
}

int main() {
  DDRB |= (1 << DDB5); 
  setup();
  while (1) {
    loop();
  }
  return 0;
}