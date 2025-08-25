uint16_t level = 0;

void setup()
{
DDRD = B01111100; // set all Digital Pins on PORTD to OUTPUT
}

void loop()
{
  //Rectangle
  // PORTD = 256;  // 124 is 01111100 in binary
  // delay(1);
  // PORTD = 0;	// 0 is 00000000 in binary
  // delay(1);
  
  //Sawtooth
  level %= 256;
  PORTD = level++;
 
  //Triangle
  // for(int i = 0 ; i < (124/2) ; i++){
  // PORTD = abs(i);
  // }
}