#include <avr/io.h>
#include <util/delay.h>
#define ARRAY_LENGTH(arr) (sizeof(arr) / sizeof(arr[0]))

const int music_count = 200; //20 to 700

void delay_us_variable(uint16_t microseconds) {
    while (microseconds--) {
        _delay_us(1);
    }
}

void play_note(uint16_t frequency, int pause) {
  
  uint16_t period = (F_CPU / 8) / frequency;
  uint16_t half_period = period / 4;
  for (int i = 0; i < pause / (half_period/music_count); i++) {
    PORTB |= (1 << PB0);
    delay_us_variable(half_period);
    PORTB &= ~(1 << PB0);
    delay_us_variable(half_period);
  }
}

const uint16_t SweetDreams[] = {
  262, 294, 330, 349, 392, 440, 494, 523, // Основная мелодия
  494, 466, 440, 415, 392, 370, 349, 330, // Дополнительная мелодия
  311, 294, 262, 262, 294, 330, 349, 392  // Конец
};

// Паузы между нотами в миллисекундах
const int pause_betw[] = {
  400, 400, 400, 400, 400, 400, 400, 400, // Припев
  400, 400, 400, 400, 400, 400, 400, 400, // Припев
  400, 400, 400, 400, 400, 400, 400, 400, // Слава
  400, 400, 400, 400, 400, 400, 400, 400, // Слава
  400, 400, 400, 400, 400, 400, 400, 400, // Припев
  400, 400, 400, 400, 400, 400, 400, 400, // Припев
  400, 400, 400, 400, 400, 400, 400, 400, // Слава
  400, 400, 400, 400, 400, 400, 400, 400, // Слава
  400, 400, 400, 400, 400, 400, 400, 400, // Припев
  400, 400, 400, 400, 400, 400, 400, 400, // Припев
  400, 400, 400, 400, 400, 400, 400, 400, // Слава
  400, 400, 400, 400, 400, 400, 400, 400, // Слава
  400, 400, 400, 400, 400, 400, 400, 400  // Припев
};

int main() {
  int length = ARRAY_LENGTH(SweetDreams);
  DDRD = 0b00000000;
  DDRB = 0b00000000; 
  PORTD = 0b00000000; 
  
  DDRB |= 0b11111111; 
  PORTD |= 0b11111111; 
  Serial.begin(9600);
  DDRB |= (1 << PB0); 
  _delay_ms(1000);
  while(1) {    
  
    for (int i = 0; i < length; i++)
    { 
      play_note(SweetDreams[i],pause_betw[i]);
      //_delay_ms(pause_betw[i]);
      delay_us_variable(100*pause_betw[i]);
    } 
  }
}