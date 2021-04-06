/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
}

void disp(int num) {
   if (num == 0) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
      }else if (num == 1) {
         digitalWrite(13, LOW);
         digitalWrite(12, LOW);
         digitalWrite(11, LOW);
         digitalWrite(10, LOW);
         digitalWrite(9, LOW);
         digitalWrite(8, LOW);
         digitalWrite(7, LOW);
         digitalWrite(6, LOW);
         digitalWrite(5, LOW);
         digitalWrite(4, LOW);
         digitalWrite(8, HIGH);
         digitalWrite(5, HIGH);
        }else if (num == 2) {
            digitalWrite(13, LOW);
            digitalWrite(12, LOW);
            digitalWrite(11, LOW);
            digitalWrite(10, LOW);
            digitalWrite(9, LOW);
            digitalWrite(8, LOW);
            digitalWrite(7, LOW);
            digitalWrite(6, LOW);
            digitalWrite(5, LOW);
            digitalWrite(4, LOW);
            digitalWrite(12, HIGH);
            digitalWrite(10, HIGH);
            digitalWrite(9, HIGH);
            digitalWrite(8, HIGH);
            digitalWrite(7, HIGH);
            digitalWrite(6, HIGH);
          }else if (num == 3) {
              digitalWrite(13, LOW);
              digitalWrite(12, LOW);
              digitalWrite(11, LOW);
              digitalWrite(10, LOW);
              digitalWrite(9, LOW);
              digitalWrite(8, LOW);
              digitalWrite(7, LOW);
              digitalWrite(6, LOW);
              digitalWrite(5, LOW);
              digitalWrite(4, LOW);
              digitalWrite(12, HIGH);
              digitalWrite(10, HIGH);
              digitalWrite(10, HIGH);
              digitalWrite(8, HIGH);
              digitalWrite(6, HIGH);
              digitalWrite(5, HIGH);
                }else if (num == 4) {
                  digitalWrite(13, LOW);
                  digitalWrite(12, LOW);
                  digitalWrite(11, LOW);
                  digitalWrite(10, LOW);
                  digitalWrite(9, LOW);
                  digitalWrite(8, LOW);
                  digitalWrite(7, LOW);
                  digitalWrite(6, LOW);
                  digitalWrite(5, LOW);
                  digitalWrite(4, LOW);
                  digitalWrite(12, HIGH);
                  digitalWrite(11, HIGH);
                  digitalWrite(8, HIGH);
                  digitalWrite(5, HIGH);
                    }else if (num == 5) {
                      digitalWrite(13, LOW);
                      digitalWrite(12, LOW);
                      digitalWrite(11, LOW);
                      digitalWrite(10, LOW);
                      digitalWrite(9, LOW);
                      digitalWrite(8, LOW);
                      digitalWrite(7, LOW);
                      digitalWrite(6, LOW);
                      digitalWrite(5, LOW);
                      digitalWrite(4, LOW);
                      digitalWrite(10, HIGH);
                      digitalWrite(12, HIGH);
                      digitalWrite(11, HIGH); 
                      digitalWrite(5, HIGH); 
                      digitalWrite(6, HIGH);
                        }else if (num == 6) {
                          digitalWrite(13, LOW);
                          digitalWrite(12, LOW);
                          digitalWrite(11, LOW);
                          digitalWrite(10, LOW);
                          digitalWrite(9, LOW);
                          digitalWrite(8, LOW);
                          digitalWrite(7, LOW);
                          digitalWrite(6, LOW);
                          digitalWrite(5, LOW);
                          digitalWrite(4, LOW);
                          digitalWrite(12, HIGH);
                          digitalWrite(11, HIGH); 
                          digitalWrite(5, HIGH); 
                          digitalWrite(6, HIGH);
                          digitalWrite(7, HIGH);
                          digitalWrite(10, HIGH);
                            }else if (num == 7) {
                              digitalWrite(13, LOW);
                              digitalWrite(12, LOW);
                              digitalWrite(11, LOW);
                              digitalWrite(10, LOW);
                              digitalWrite(9, LOW);
                              digitalWrite(8, LOW);
                              digitalWrite(7, LOW);
                              digitalWrite(6, LOW);
                              digitalWrite(5, LOW);
                              digitalWrite(4, LOW);
                              digitalWrite(10, HIGH);
                              digitalWrite(8, HIGH);
                              digitalWrite(5, HIGH);
                                }else if (num == 8) {
                                  digitalWrite(13, LOW);
                                  digitalWrite(12, LOW);
                                  digitalWrite(11, LOW);
                                  digitalWrite(10, LOW);
                                  digitalWrite(9, LOW);
                                  digitalWrite(8, LOW);
                                  digitalWrite(7, LOW);
                                  digitalWrite(6, LOW);
                                  digitalWrite(5, LOW);
                                  digitalWrite(4, LOW);
                                  digitalWrite(11, HIGH);
                                  digitalWrite(10, HIGH);
                                  digitalWrite(9, HIGH);
                                  digitalWrite(8, HIGH);
                                  digitalWrite(7, HIGH);
                                  digitalWrite(6, HIGH);
                                  digitalWrite(5, HIGH);
                                  digitalWrite(12, HIGH);
                                    }else if (num == 9) {
                                      digitalWrite(13, LOW);
                                      digitalWrite(12, LOW);
                                      digitalWrite(11, LOW);
                                      digitalWrite(10, LOW);
                                      digitalWrite(9, LOW);
                                      digitalWrite(8, LOW);
                                      digitalWrite(7, LOW);
                                      digitalWrite(6, LOW);
                                      digitalWrite(5, LOW);
                                      digitalWrite(4, LOW);
                                      digitalWrite(11, HIGH);
                                      digitalWrite(10, HIGH);
                                      digitalWrite(8, HIGH);
                                      digitalWrite(6, HIGH);
                                      digitalWrite(5, HIGH);
                                      digitalWrite(12, HIGH);
                                }
                                
}

void repeat9seg(int delayTime) {
    
    disp(0); 
    delay(delayTime);
    disp(1); 
    delay(delayTime);
    disp(2);
    delay(delayTime);
    disp(3); 
    delay(delayTime);
    disp(4); 
    delay(delayTime);
    disp(5); 
    delay(delayTime);
    disp(6); 
    delay(delayTime);
    disp(7); 
    delay(delayTime);
    disp(8); 
    delay(delayTime);
    disp(9); 
    delay(1000);
  }

void loop() {

    repeat9seg(1000);
    
}
