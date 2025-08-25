#include <Arduino.h>

// Параметры ШИМ
const int pwmPin = 9; // Пин для подключения светодиода
const int pwmFrequency = 1000; // Частота ШИМ (в Гц)
const int pwmResolution = 8; // Разрядность ШИМ (8 бит)
const int initialBrightness = 128; // Начальная яркость (0-255)

void setup() {
  // Установка пина для ШИМ в режим вывода
  pinMode(pwmPin, OUTPUT);
  // Настройка параметров ШИМ
  // Fast PWM, non-inverting mode (WGM = 0b011)
  TCCR1A |= (1 << WGM10) | (1 << WGM11);
  TCCR1B |= (1 << WGM12);
  
  // Настройка предделителя для управления частотой ШИМ
  // CS10 - делитель на 1 (без деления)
  TCCR1B |= (1 << CS10);
  
  // Настройка разрядности ШИМ
  // 8 бит
  TCCR1A |= (1 << COM1A1);
  
  // Установка начальной яркости
  OCR1A = initialBrightness; // Начальная яркость (0-255)
}

void loop() {
  for (int brightness = 0; brightness <= 255; brightness++) {
    OCR1A = brightness;
    delay(4);
  }
  
  for (int brightness = 255; brightness >= 0; brightness--) {
    OCR1A = brightness;
    delay(4);
  }
}