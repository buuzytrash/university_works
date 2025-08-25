#include <avr/io.h>
#include <util/delay.h>

const int music_count = 10;
const char* numbers[4][4] = {
  {"1", "2", "3", "A"},
  {"4", "5", "6", "B"},
  {"7", "8", "9", "C"},
  {"*", "0", "#", "D"}
};

const uint8_t portMask[] = {0b11011111, 0b11101111, 0b11110111, 0b11111011};
const uint8_t pinMask[] = {0b00000100, 0b00001000, 0b00010000, 0b00100000};

const uint16_t freq[4][4] = {
    {262, 880, 587, 392},
    {294, 988, 659, 440},
    {330, 1047, 698, 494},
    {349, 1175, 784, 523}
};

void delay_us_variable(uint16_t microseconds) {
    while (microseconds--) {
        _delay_us(1);
    }
}

void play_note(uint16_t frequency) {
  
  uint16_t period = (F_CPU / 16) / frequency;
  uint16_t half_period = period / 2;
  for (int i = 0; i < music_count; i++) {
    PORTB |= (1 << PB0);
    delay_us_variable(half_period);
    PORTB &= ~(1 << PB0);
    delay_us_variable(half_period);
  }
}

int main() {
  DDRD &= 0b00000000; 
  DDRB |= 0b11111111; 
  PORTD |= 0b11111111;  
  Serial.begin(9600);
  DDRB |= (1 << PB0); 

  while(1) {
    _delay_ms(10);
    for (int i = 0; i < 4; i++) {
    PORTB &= 0x00;
    PORTB |= portMask[i]; 
    _delay_ms(5); 

    for (int j = 0; j < 4; j++) {
        if (!(PIND & pinMask[j])) {
            Serial.print(numbers[i][j]); 
            play_note(freq[i][j]); 
            _delay_ms(100);

            while (!(PIND & pinMask[j])) {
                _delay_ms(10);
            }
            break; 
        }
    }
  }

  }
}