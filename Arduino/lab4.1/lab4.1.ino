void timer1_init() {
  TCCR1A = 0b00000000;
  TCCR1B |= (1 << CS12) | (1 << CS10);
  TCCR1C = 0b00000000;
  TCNT1 = 0;
  TIMSK1 |= (1 << TOIE1);
  Serial.begin(9600);
}

int main(void)
{
  DDRB |= (1 << DDB5); 
  timer1_init();       
  
  while(1) {
    if (TIFR1 & OCF1A){
      Serial.println("Hello");
      PORTB ^= (1 << PORTB5);
      TIFR1 |= (1 << TOV1);
      TCNT1 = 34200;
    } 
}
}