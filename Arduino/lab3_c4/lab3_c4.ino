unsigned int sensorValue = 0;
unsigned int outputValue = 0;

void setup()
{
    // Инициализация последовательного порта
    Serial.begin(9600);

    // Настройка пина A0 как входа
    DDRC &= ~(1 << PC0); // PC0 соответствует A0

    // Настройка АЦП
    ADMUX |= (1 << REFS0); // Выбор опорного напряжения AVcc
    ADCSRA |= (1 << ADPS2) | (1 << ADPS1) | (1 << ADPS0); // Предделитель тактовой частоты 128
    ADCSRA |= (1 << ADEN); // Включение АЦП
}

void loop()
{
    // Чтение значения с аналогового пина A0
    ADMUX = (ADMUX & 0xF0) | 0x00; // Выбор канала A0
    ADCSRA |= (1 << ADSC); // Запуск преобразования
    while (ADCSRA & (1 << ADSC)); // Ожидание завершения преобразования
    sensorValue = ADC; // Чтение значения с АЦП

    // Выполнение SAR преобразования
    outputValue = sensorValue;
    print_voltage(outputValue);

    // Вывод значений в Serial Monitor
    Serial.print("Sensor = ");
    Serial.print(sensorValue);

    delay(500);
}

void uart_transmit(unsigned char data) {
  while (!(UCSR0A & (1 << UDRE0))) {} // Ждем освобождения регистра
  UDR0 = data; // Передаем данные
}

// Функция для передачи строки по UART
void uart_print(const char* str) {
  while (*str) {
    uart_transmit(*str++);
  }
}

// Функция для преобразования и вывода напряжения в формате строки
void print_voltage(uint16_t adc_value) {
  float voltage = adc_value * (5.0 / 1023.0); // Преобразование к напряжению в Вольтах
  char buffer[10];
  dtostrf(voltage, 4, 2, buffer); // Преобразование float в строку с 2 знаками после запятой
  uart_print("\n\t\tVoltage: ");
  uart_print(buffer);
  uart_print(" V\r\n");
}
