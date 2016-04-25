/**
 * Работа с кнопками
 * Copyright (C) 2016 Alexey Shikharbeev
 * http://samopal.pro
 *
 * SB_NONE — ничего не произошло
 * SB_CLICK — событие срабатывания кнопки
 * SB_AUTO_CLICK — событие автонажатия кнопки при длинном удержании
 * SB_LONG_CLICK — событие длинного нажатия кнопки
*/

#include <sav_button.h>
/**
 * SButton button(pin,tm1,tm2,tm3,tm4);
 * pin - номер пина, к которому подключена кнопка
 * tm1 - таймаут дребезга контактов. По умолчанию 50мс
 * tm2 - время длинного нажатия клавиши. По умолчанию 2000мс
 * tm3 - врямы перевода кнопки в генерацию серии нажатий. По умолсанию отключено
 * tm4 - время между кликами в серии. По умолчанию 500 мс. Если tm3 = 0 то не работает
*/
SButton button1(4,50,2000,4000,1000);
SButton button2(5,50,2000,4000,1000);

void setup()
{
   Serial.begin(115200);
   Serial.println("Buttons press test...");
    
// Инициация кнопок 
   button1.begin();
   button2.begin();
}

void loop(){
   switch( button1.Loop() ){
      case SB_CLICK:
         Serial.println("Press BUTTON_1");
         break;
      case SB_LONG_CLICK:
         Serial.println("LONG press BUTTON_1");
         break;
      case SB_AUTO_CLICK:
         Serial.println("AUTO press BUTTON_1");
         break;       
   }
   switch( button2.Loop() ){
      case SB_CLICK:
         Serial.println("Press BUTTON_2");
         break;
      case SB_LONG_CLICK:
         Serial.println("LONG press BUTTON_2");
         break;
      case SB_AUTO_CLICK:
         Serial.println("AUTO press BUTTON_2");
         break;       
   }


  
}



