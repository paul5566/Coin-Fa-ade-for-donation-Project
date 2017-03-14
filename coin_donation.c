//Sets up Switches
boolean Switch1;
boolean Switch2;
boolean Switch3;
boolean Switch4;
boolean Switch5;
boolean Switch6;
boolean Switch7;
boolean Switch8;
boolean Switch9;
boolean Switch10;

// Sets up Delay Check
boolean Delay4;
boolean Delay5;
boolean Delay6;
boolean Delay7;
boolean Delay8;
boolean Delay9;
boolean Delay10;
boolean Delay11;
boolean Delay12;


// Sets up Delay Timers
int DelayT4;
int DelayT5;
int DelayT6;
int DelayT7;
int DelayT8;
int DelayT9;
int DelayT10;
int DelayT11;
int DelayT12;

int Time;

//Timer and Color for Light 1
int Timer1;
int Color1;

//Timer and Color for Light 2
int Timer2;
int Color2;

//Timer and Color for Light 3
int Timer3;
int Color3;

//Timer and Color for Light 4
int Timer4;
int Color4;

//Timer and Color for Light 5
int Timer5;
int Color5;

//Timer and Color for Light 6
int Timer6;
int Color6;

//Timer and Color for Light 7
int Timer7;
int Color7;

//Timer and Color for Light 8
int Timer8;
int Color8;

//Timer and Color for Light 9
int Timer9;
int Color9;

//Timer and Color for Light 10
int Timer10;
int Color10;

//Timer and Color for Light 11
int Timer11;
int Color11;

//Timer and Color for Light 12
int Timer12;
int Color12;

void setup() {
Time = 2000;

//Lights are set to 0
Timer1 = 0;
Color1 = 0;

Timer2 = 0;
Color2 = 0;

Timer3 = 0;
Color3 = 0;

Timer4 = 0;
Color4 = 0;

Timer5 = 0;
Color5 = 0;

Timer6 = 0;
Color6 = 0;

Timer7 = 0;
Color7 = 0;

Timer8 = 0;
Color8 = 0;

Timer9 = 0;
Color9 = 0;

Timer10 = 0;
Color10 = 0;

Timer11 = 0;
Color11 = 0;

Timer12 = 0;
Color12 = 0;

//Delays are set to 0 in the case of lights 1,2,3, they have no delays.
DelayT4 = 0;
DelayT5 = 0;
DelayT6 = 0;
DelayT7 = 0;
DelayT8 = 0;
DelayT9 = 0;
DelayT10 = 0;
DelayT11 = 0;
DelayT12 = 0;

//input switches 1-10
pinMode(1, INPUT); //switch 1
pinMode(2, INPUT); //switch 2
pinMode(3, INPUT); //switch 3
pinMode(4, INPUT); //switch 4
pinMode(5, INPUT); //switch 5
pinMode(6, INPUT); //switch 6
pinMode(7, INPUT); //switch 7
pinMode(8, INPUT); //switch 8
pinMode(9, INPUT); //switch 9
pinMode(10, INPUT); //switch 10

//output colors switch 1
pinMode(11, OUTPUT); //color 1 a
pinMode(12, OUTPUT); //color 1 b
pinMode(13, OUTPUT); //color 1 c

//output colors switch 2
pinMode(14, OUTPUT); //color 2a
pinMode(15, OUTPUT); //color 2b
pinMode(16, OUTPUT); //color 2c

//output colors switch 3
pinMode(17, OUTPUT); //color 3 a
pinMode(18, OUTPUT); //color 3 b
pinMode(19, OUTPUT); //color 3 c

//output colors switch 4
pinMode(20, OUTPUT); //color 4 a
pinMode(21, OUTPUT); //color 4 b
pinMode(22, OUTPUT); //color 4 c

//output colors switch 5
pinMode(23, OUTPUT); //color 5 a
pinMode(24, OUTPUT); //color 5 b
pinMode(25, OUTPUT); //color 5 c

//output colors switch 6
pinMode(26, OUTPUT); //color 6 a
pinMode(27, OUTPUT); //color 6 b
pinMode(28, OUTPUT); //color 6 c

//output colors switch 7
pinMode(29, OUTPUT); //color 7 a
pinMode(30, OUTPUT); //color 7 b
pinMode(31, OUTPUT); //color 7 c

//output colors switch 8
pinMode(32, OUTPUT); //color 8 a
pinMode(33, OUTPUT); //color 8 b
pinMode(34, OUTPUT); //color 8 c

//output colors switch 9
pinMode(35, OUTPUT); //color 9 a
pinMode(36, OUTPUT); //color 9 b
pinMode(37, OUTPUT); //color 9 c

//output colors switch 10
pinMode(38, OUTPUT); //color 10 a
pinMode(39, OUTPUT); //color 10 b
pinMode(40, OUTPUT); //color 10 c

//output colors switch 11
pinMode(41, OUTPUT); //color 11 a
pinMode(42, OUTPUT); //color 11 b
pinMode(43, OUTPUT); //color 11 c

//output colors switch 12
pinMode(44, OUTPUT); //color 12 a
pinMode(45, OUTPUT); //color 12 b
pinMode(46, OUTPUT); //color 12 c

}

void loop() {
Switch1 = digitalRead(1); //switch 1
Switch2 = digitalRead(2); //switch 2
Switch3 = digitalRead(3); //switch 3
Switch4 = digitalRead(4); //switch 4
Switch5 = digitalRead(5); //switch 5
Switch6 = digitalRead(6); //switch 6
Switch7 = digitalRead(7); //switch 7
Switch8 = digitalRead(8); //switch 8
Switch9 = digitalRead(9); //switch 9
Switch10 = digitalRead(10); //switch 10

// if switch is activated while timer is running
// 1
if (Switch1 == HIGH && Timer1 > 0){ 
    Timer1 = Time;
    Color1 = Color1+1;
}  
if (Switch1 == HIGH && Timer4 > 0){ 
    Timer4 = Time;
    Color4 = Color4+1;
    Delay4 = HIGH; 
    DelayT4 = 100;
} 
if (Switch1 == HIGH && Timer5 > 0){ 
    Timer5 = Time;
    Color5 = Color5+1; 
    Delay5 = HIGH;
    DelayT5 = 50;
} 
//2
if (Switch2 == HIGH && Timer2 > 0){ 
    Timer2 = Time;
    Color2 = Color2+1; 
} 
if (Switch2 == HIGH && Timer5 > 0){ 
    Timer5 = Time;
    Color5 = Color5+1; 
    Delay5 = HIGH;
    DelayT5 = 50;
} 
// 3
if (Switch3 == HIGH && Timer2 > 0){ 
    Timer2 = Time;
    Color2 = Color2+1; 
} 
if (Switch3 == HIGH && Timer6 > 0){ 
    Timer6 = Time;
    Color6 = Color6+1; 
    Delay6 = HIGH;
    DelayT6 = 50;
} 
// 4
if (Switch4 == HIGH && Timer3 > 0){ 
    Timer3 = Time;
    Color3 = Color3+1; 
}
if (Switch4 == HIGH && Timer6 > 0){ 
    Timer6 = Time;
    Color6 = Color6+1;
    Delay6 = HIGH;
    DelayT6 = 50;
}
// 5
if (Switch5 == HIGH && Timer5 > 0){ 
    Timer5 = Time;
    Color5 = Color5+1; 
}
if (Switch5 == HIGH && Timer8 > 0){ 
    Timer8 = Time;
    Color8 = Color8+1; 
    Delay8 = HIGH;
    DelayT8 = 50;
}
//6
if (Switch6 == HIGH && Timer6 > 0){ 
    Timer6 = Time;
    Color6 = Color6+1; 
}
if (Switch6 == HIGH && Timer8 > 0){ 
    Timer8 = Time;
    Color8 = Color8+1; 
    Delay8 = HIGH;
    DelayT8 = 50;
}
// 7
if (Switch7 == HIGH && Timer7 > 0){ 
    Timer7 = Time;
    Color7 = Color7+1; 
}
if (Switch7 == HIGH && Timer10 > 0){ 
    Timer10 = Time;
    Color10 = Color10+1; 
    Delay10 = HIGH;
    DelayT10 = 100;
}
if (Switch7 == HIGH && Timer11 > 0){ 
    Timer11 = Time;
    Color11 = Color11+1; 
    Delay11 = HIGH;
    DelayT11 = 50;
}
// 8
if (Switch8 == HIGH && Timer8 > 0){ 
    Timer8 = Time;
    Color8 = Color8+1; 
}
if (Switch8 == HIGH && Timer11 > 0){ 
    Timer11 = Time;
    Color11 = Color11+1; 
    Delay11 = HIGH;
    DelayT11 = 50;
}
// 9
if (Switch9 == HIGH && Timer8 > 0){ 
    Timer8 = Time;
    Color8 = Color8+1; 
}
if (Switch9 == HIGH && Timer12 > 0){ 
    Timer12 = Time;
    Color12 = Color12+1; 
    Delay12 = HIGH;
    DelayT12 = 50;
}
// 10
if (Switch10 == HIGH && Timer9 > 0){ 
    Timer9 = Time;
    Color9 = Color9+1; 
}
if (Switch10 == HIGH && Timer12 > 0){ 
    Timer12 = Time;
    Color12 = Color12+1; 
    Delay12 = HIGH;
    DelayT12 = 50;
}


//if switch is activated after timer expires
//1
if (Switch1 == HIGH && Timer1 == 0){
  Timer1 = Time;
  Color1 = 1;
}
if (Switch1 == HIGH && Timer4 == 0){
  Timer4 = Time;
  Color4 = 1;
  Delay4 = HIGH;
  DelayT4 = 100;
}
if (Switch1 == HIGH && Timer5 == 0){
  Timer5 = Time;
  Color5 = 1;
  Delay5 = HIGH;
  DelayT5 = 50;
}
// 2
if (Switch2 == HIGH && Timer2 == 0){
  Timer2 = Time;
  Color2 = 1;
}
if (Switch2 == HIGH && Timer5 == 0){
  Timer5 = Time;
  Color5 = 1;
  Delay5 = HIGH;
  DelayT5 = 50;
}
// 3
if (Switch3 == HIGH && Timer2 == 0){
  Timer2 = Time;
  Color2 = 1;
}
if (Switch3 == HIGH && Timer6 == 0){
  Timer6 = Time;
  Color6 = 1;
  Delay6 = HIGH;
  DelayT6 = 50;
}
// 4
if (Switch4 == HIGH && Timer3 == 0){
  Timer3 = Time;
  Color3 = 1;
}
if (Switch4 == HIGH && Timer6 == 0){
  Timer6 = Time;
  Color6 = 1;
  Delay6 = HIGH;
  DelayT6 = 50;
}
// 5
if (Switch5 == HIGH && Timer5 == 0){
  Timer5 = Time;
  Color5 = 1;
}
if (Switch5 == HIGH && Timer8 == 0){
  Timer8 = Time;
  Color8 = 1;
  Delay8 = HIGH;
  DelayT8 = 100;
}
// 6
if (Switch6 == HIGH && Timer6 == 0){
  Timer6 = Time;
  Color6 = 1;
}
if (Switch6 == HIGH && Timer8 == 0){
  Timer8 = Time;
  Color8 = 1;
  Delay8 = HIGH;
  DelayT8 = 100;
}
// 7
if (Switch7 == HIGH && Timer7 == 0){
  Timer7 = Time;
  Color7 = 1;
}
if (Switch7 == HIGH && Timer10 == 0){
  Timer10 = Time;
  Color10 = 1;
  Delay10 = HIGH;
  DelayT10 = 100;
}
if (Switch7 == HIGH && Timer11 == 0){
  Timer11 = Time;
  Color11 = 1;
  Delay11 = HIGH;
  DelayT11 = 50;
}
// 8
if (Switch8 == HIGH && Timer8 == 0){
  Timer8 = Time;
  Color8 = 1;
}
if (Switch8 == HIGH && Timer11 == 0){
  Timer11 = Time;
  Color11 = 1;
  Delay11 = HIGH;
  DelayT11 = 50;
}
// 9
if (Switch9 == HIGH && Timer8 == 0){
  Timer8 = Time;
  Color8 = 1;
}
if (Switch9 == HIGH && Timer12 == 0){
  Timer12 = Time;
  Color12 = 1;
  Delay12 = HIGH;
  DelayT12 = 50;
}
// 10
if (Switch10 == HIGH && Timer9 == 0){
  Timer9 = Time;
  Color9 = 1;
}
if (Switch10 == HIGH && Timer12 == 0){
  Timer12 = Time;
  Color12 = 1;
  Delay12 = HIGH;
  DelayT12 = 50;
}

// determines color of light
//1 | 11 12 13
if (Timer1 > 0) {
  if (Color1 > 0){ //blue
    digitalWrite(13, HIGH);
    if (Color1 > 1){ //green
      digitalWrite(13,LOW);
      digitalWrite(12, HIGH);
      if(Color1 > 2){ //red
        digitalWrite(12,LOW);
        digitalWrite(11,HIGH);
        if(Color1 > 3){ //bluegreen
          digitalWrite(11,LOW);
          digitalWrite(12,HIGH);
          digitalWrite(13,HIGH);
          if(Color1 > 4){ //yellowgreen
            digitalWrite(11,HIGH);
            digitalWrite(13,LOW); 
            if(Color1 > 5){ //purple
              digitalWrite(12,LOW);
              digitalWrite(13,HIGH);
              if(Color1 >6){ //white
                digitalWrite(12,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer1 = Timer1 - 200;
}
//2 | 14 15 16
if (Timer2 > 0) {
  if (Color2 > 0){ //blue
    digitalWrite(16, HIGH);
    if (Color2 > 1){ //green
      digitalWrite(16,LOW);
      digitalWrite(15, HIGH);
      if(Color2 > 2){ //red
        digitalWrite(15,LOW);
        digitalWrite(14,HIGH);
        if(Color2 > 3){ //bluegreen
          digitalWrite(14,LOW);
          digitalWrite(15,HIGH);
          digitalWrite(16,HIGH);
          if(Color2 > 4){ //yellowgreen
            digitalWrite(14,HIGH);
            digitalWrite(16,LOW); 
            if(Color2 > 5){ //purple
              digitalWrite(15,LOW);
              digitalWrite(16,HIGH);
              if(Color2 >6){ //white
                digitalWrite(15,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer2 = Timer2 - 200;
}
//3 | 17 18 19
if (Timer3 > 0) {
  if (Color3 > 0){ //blue
    digitalWrite(19, HIGH);
    if (Color3 > 1){ //green
      digitalWrite(19,LOW);
      digitalWrite(18, HIGH);
      if(Color3 > 2){ //red
        digitalWrite(18,LOW);
        digitalWrite(17,HIGH);
        if(Color3 > 3){ //bluegreen
          digitalWrite(17,LOW);
          digitalWrite(18,HIGH);
          digitalWrite(19,HIGH);
          if(Color3 > 4){ //yellowgreen
            digitalWrite(17,HIGH);
            digitalWrite(19,LOW); 
            if(Color3 > 5){ //purple
              digitalWrite(18,LOW);
              digitalWrite(19,HIGH);
              if(Color3 >6){ //white
                digitalWrite(18,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer3 = Timer3 - 200;
}
//4 | 20 21 22
if (Timer4 > 0) {
  if (Delay4 == HIGH){
    delay(DelayT4);
    Delay4 = LOW;
  }
  else if (Delay4 == LOW);{
  if (Color4 > 0){ //blue
    digitalWrite(22, HIGH);
    if (Color4 > 1){ //green
      digitalWrite(22,LOW);
      digitalWrite(21, HIGH);
      if(Color4 > 2){ //red
        digitalWrite(21,LOW);
        digitalWrite(20,HIGH);
        if(Color4 > 3){ //bluegreen
          digitalWrite(20,LOW);
          digitalWrite(21,HIGH);
          digitalWrite(22,HIGH);
          if(Color4 > 4){ //yellowgreen
            digitalWrite(20,HIGH);
            digitalWrite(22,LOW); 
            if(Color4 > 5){ //purple
              digitalWrite(21,LOW);
              digitalWrite(22,HIGH);
              if(Color4 >6){ //white
                digitalWrite(21,HIGH);
              }
            }
          }
        }
      }
    }
  }
  }
  Timer4 = Timer4 - 200;
}
//5 | 23 24 25
if (Timer5 > 0) {
  if (Delay5 == HIGH){
    delay(DelayT5);
    Delay5 = LOW;
  }
  else if (Delay5 == LOW){
  if (Color5 > 0){ //blue
    digitalWrite(25, HIGH);
    if (Color5 > 1){ //green
      digitalWrite(25,LOW);
      digitalWrite(24, HIGH);
      if(Color5 > 2){ //red
        digitalWrite(24,LOW);
        digitalWrite(23,HIGH);
        if(Color5 > 3){ //bluegreen
          digitalWrite(23,LOW);
          digitalWrite(24,HIGH);
          digitalWrite(25,HIGH);
          if(Color5 > 4){ //yellowgreen
            digitalWrite(23,HIGH);
            digitalWrite(25,LOW); 
            if(Color5 > 5){ //purple
              digitalWrite(24,LOW);
              digitalWrite(25,HIGH);
              if(Color5 >6){ //white
                digitalWrite(24,HIGH);
              }
            }
          }
        }
      }
    }
  }
  }
  Timer5 = Timer5 - 200;
}
//6 | 26 27 28
if (Timer6 > 0) {
  if (Delay6 == HIGH){
    delay(DelayT6);
    Delay6 = LOW;
  }
  else if (Color6 > 0){ //blue
    digitalWrite(28, HIGH);
    if (Color6 > 1){ //green
      digitalWrite(28,LOW);
      digitalWrite(27, HIGH);
      if(Color6 > 2){ //red
        digitalWrite(27,LOW);
        digitalWrite(26,HIGH);
        if(Color6 > 3){ //bluegreen
          digitalWrite(26,LOW);
          digitalWrite(27,HIGH);
          digitalWrite(28,HIGH);
          if(Color6 > 4){ //yellowgreen
            digitalWrite(26,HIGH);
            digitalWrite(28,LOW); 
            if(Color6 > 5){ //purple
              digitalWrite(27,LOW);
              digitalWrite(28,HIGH);
              if(Color6 >6){ //white
                digitalWrite(27,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer6 = Timer6 - 200;
}
//7 | 29 30 31
if (Timer7 > 0) {
  if (Delay7 == HIGH){
    delay(DelayT7);
    Delay7 = LOW;
  }
  else if (Color7 > 0){ //blue
    digitalWrite(31, HIGH);
    if (Color7 > 1){ //green
      digitalWrite(31, LOW);
      digitalWrite(30, HIGH);
      if(Color7 > 2){ //red
        digitalWrite(30,LOW);
        digitalWrite(29,HIGH);
        if(Color7 > 3){ //bluegreen
          digitalWrite(29,LOW);
          digitalWrite(30,HIGH);
          digitalWrite(31,HIGH);
          if(Color7 > 4){ //yellowgreen
            digitalWrite(29,HIGH);
            digitalWrite(31,LOW); 
            if(Color7 > 5){ //purple
              digitalWrite(30,LOW);
              digitalWrite(31,HIGH);
              if(Color7 >6){ //white
                digitalWrite(30,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer7 = Timer7 - 200;
}
//8 | 32 33 34
if (Timer8 > 0) {
  if (Delay8 == HIGH){
    delay(DelayT8);
    Delay8 = LOW;
  }
  else if (Color8 > 0){ //blue
    digitalWrite(34, HIGH);
    if (Color8 > 1){ //green
      digitalWrite(34,LOW);
      digitalWrite(33, HIGH);
      if(Color8 > 2){ //red
        digitalWrite(33,LOW);
        digitalWrite(32,HIGH);
        if(Color8 > 3){ //bluegreen
          digitalWrite(32,LOW);
          digitalWrite(33,HIGH);
          digitalWrite(34,HIGH);
          if(Color8 > 4){ //yellowgreen
            digitalWrite(32,HIGH);
            digitalWrite(34,LOW); 
            if(Color8 > 5){ //purple
              digitalWrite(33,LOW);
              digitalWrite(34,HIGH);
              if(Color8 >6){ //white
                digitalWrite(33,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer8 = Timer8 - 200;
}
//9 | 35 36 37
if (Timer9 > 0) {
  if (Delay9 == HIGH){
    delay(DelayT9);
    Delay9 = LOW;
  }
  else if (Color9 > 0){ //blue
    digitalWrite(37, HIGH);
    if (Color9 > 1){ //green
      digitalWrite(37,LOW);
      digitalWrite(36, HIGH);
      if(Color9 > 2){ //red
        digitalWrite(36,LOW);
        digitalWrite(35,HIGH);
        if(Color9 > 3){ //bluegreen
          digitalWrite(35,LOW);
          digitalWrite(36,HIGH);
          digitalWrite(37,HIGH);
          if(Color9 > 4){ //yellowgreen
            digitalWrite(35,HIGH);
            digitalWrite(37,LOW); 
            if(Color9 > 5){ //purple
              digitalWrite(36,LOW);
              digitalWrite(37,HIGH);
              if(Color9 >6){ //white
                digitalWrite(36,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer9 = Timer9 - 200;
}
//10 | 38 39 40
if (Timer10 > 0) {
  if (Delay10 == HIGH){
    delay(DelayT10);
    Delay10 = LOW;
  }
  else if (Color10 > 0){ //blue
    digitalWrite(40, HIGH);
    if (Color10 > 1){ //green
      digitalWrite(40,LOW);
      digitalWrite(39, HIGH);
      if(Color10 > 2){ //red
        digitalWrite(39,LOW);
        digitalWrite(38,HIGH);
        if(Color10 > 3){ //bluegreen
          digitalWrite(38,LOW);
          digitalWrite(39,HIGH);
          digitalWrite(40,HIGH);
          if(Color10 > 4){ //yellowgreen
            digitalWrite(38,HIGH);
            digitalWrite(40,LOW); 
            if(Color10 > 5){ //purple
              digitalWrite(39,LOW);
              digitalWrite(40,HIGH);
              if(Color10 >6){ //white
                digitalWrite(39,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer10 = Timer10 - 200;
}
//11 | 41 42 43
if (Timer11 > 0) {
  if (Delay11 == HIGH){
    delay(DelayT11);
    Delay11 = LOW;
  }
  else if (Color11 > 0){ //blue
    digitalWrite(43, HIGH);
    if (Color11 > 1){ //green
      digitalWrite(43,LOW);
      digitalWrite(42, HIGH);
      if(Color11 > 2){ //red
        digitalWrite(42,LOW);
        digitalWrite(41,HIGH);
        if(Color11 > 3){ //bluegreen
          digitalWrite(41,LOW);
          digitalWrite(42,HIGH);
          digitalWrite(43,HIGH);
          if(Color11 > 4){ //yellowgreen
            digitalWrite(41,HIGH);
            digitalWrite(43,LOW); 
            if(Color11 > 5){ //purple
              digitalWrite(42,LOW);
              digitalWrite(43,HIGH);
              if(Color11 >6){ //white
                digitalWrite(42,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer11 = Timer11 - 200;
}
//12 | 44 45 46
if (Timer12 > 0) {
  if (Delay12 == HIGH){
    delay(DelayT12);
    Delay12 = LOW;
  }
  else if (Color12 > 0){ //blue
    digitalWrite(46, HIGH);
    if (Color12 > 1){ //green
      digitalWrite(46,LOW);
      digitalWrite(45, HIGH);
      if(Color12 > 2){ //red
        digitalWrite(45,LOW);
        digitalWrite(44,HIGH);
        if(Color12 > 3){ //bluegreen
          digitalWrite(44,LOW);
          digitalWrite(45,HIGH);
          digitalWrite(46,HIGH);
          if(Color12 > 4){ //yellowgreen
            digitalWrite(44,HIGH);
            digitalWrite(46,LOW); 
            if(Color12 > 5){ //purple
              digitalWrite(45,LOW);
              digitalWrite(46,HIGH);
              if(Color12 >6){ //white
                digitalWrite(45,HIGH);
              }
            }
          }
        }
      }
    }
  }
  Timer12 = Timer12 - 200;
}

// turns off all lights when timer runs out
//1
if (Timer1 == 0) { 
  digitalWrite(13,LOW);
  digitalWrite(12,LOW);
  digitalWrite(11,LOW);
  Color1 == 0;
}
//2
if (Timer2 == 0) { 
  digitalWrite(14,LOW);
  digitalWrite(15,LOW);
  digitalWrite(16,LOW);
  Color2 == 0;
}
//3
if (Timer3 == 0) { 
  digitalWrite(17,LOW);
  digitalWrite(18,LOW);
  digitalWrite(19,LOW);
  Color3 == 0;
}
//4
if (Timer4 == 0) { 
  digitalWrite(20,LOW);
  digitalWrite(21,LOW);
  digitalWrite(22,LOW);
  Color4 == 0;
}
//5
if (Timer5 == 0) { 
  digitalWrite(23,LOW);
  digitalWrite(24,LOW);
  digitalWrite(25,LOW);
  Color5 == 0;
}
//6
if (Timer6 == 0) { 
  digitalWrite(26,LOW);
  digitalWrite(27,LOW);
  digitalWrite(28,LOW);
  Color6 == 0;
}
//7
if (Timer7 == 0) { 
  digitalWrite(29,LOW);
  digitalWrite(30,LOW);
  digitalWrite(31,LOW);
  Color7 == 0;
}
//8
if (Timer8 == 0) { 
  digitalWrite(32,LOW);
  digitalWrite(33,LOW);
  digitalWrite(34,LOW);
  Color8 == 0;
}
//9
if (Timer9 == 0) { 
  digitalWrite(35,LOW);
  digitalWrite(36,LOW);
  digitalWrite(37,LOW);
  Color9 == 0;
}
//10
if (Timer10 == 0) { 
  digitalWrite(38,LOW);
  digitalWrite(39,LOW);
  digitalWrite(40,LOW);
  Color10 == 0;
}
//11
if (Timer11 == 0) { 
  digitalWrite(41,LOW);
  digitalWrite(42,LOW);
  digitalWrite(43,LOW);
  Color11 == 0;
}
//12
if (Timer12 == 0) { 
  digitalWrite(44,LOW);
  digitalWrite(45,LOW);
  digitalWrite(46,LOW);
  Color12 == 0;
}

// .2 sec delay
delay(200); 
}

