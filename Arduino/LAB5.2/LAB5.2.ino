volatile bool button_flag = false;


void timer1_init() {
  DDRD &= ~(1 << DDD2); // Установка входа
  PORTD |= (1 << PORTD2); // Установка резистора
  
  // Регистр разрешения глобальных прерываний
  EIMSK |= (1 << INT0); // Разрешение внешнего прерывания INT0
  // Регистр управления внешними прерываниями
  EICRA |= (1 << ISC01); // Задний фронт импульса на входе 
  						 // INT0 генерирует запрос прерывания
  SREG |= (1 << 7); // Разрешение глобальных прерываний путем
  					// установки бита 7 - I
  Serial.begin(9600);
}

// С помощью кнопки подаем запрос на прерывание
ISR(INT0_vect)
{
  // button_flag = true;

      Serial.println("Stop pressing me");
      button_flag = false;
}

int main(void)
{
  timer1_init();       
  
  while(1) {
    // if (button_flag){
    // } 
  }
}