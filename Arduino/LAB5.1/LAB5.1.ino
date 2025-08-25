bool timer1_flag = false;

void timer1_init() {
  TCCR1A = 0b00000000;
  TCCR1B |= (1 << CS12) | (1 << CS10);
  TCCR1C = 0b00000000;
  TCNT1 = 34200;
  TIMSK1 |= (1 << TOIE1);
  sei();
  Serial.begin(9600);
}

ISR(TIMER1_OVF_vect)
{
  timer1_flag = true;
}

int main(void)
{
  DDRB |= (1 << DDB5); 
  timer1_init();       
  
  while(1) {
    if (timer1_flag){
      Serial.println("Hello");
      PORTB ^= (1 << PORTB5);
      timer1_flag = false;
      TCNT1 = 34200;
    }
  }
}