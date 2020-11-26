#define Led_A 5
#define Led_B 4
#define Led_C 9
#define Led_D 10
#define Led_E 11
#define Led_F 6
#define Led_G 7
#define Led_DOT 8

#define LEDOFF HIGH
#define LEDON LOW 
#define viive 1000

void setup()
{
  pinMode(Led_A, OUTPUT);
  pinMode(Led_B, OUTPUT);
  pinMode(Led_C, OUTPUT);
  pinMode(Led_D, OUTPUT);
  pinMode(Led_E, OUTPUT);
  pinMode(Led_F, OUTPUT);
  pinMode(Led_G, OUTPUT);
  pinMode(Led_DOT, OUTPUT);
  
  digitalWrite(Led_A, LEDOFF);
  digitalWrite(Led_B, LEDOFF);
  digitalWrite(Led_C, LEDOFF);
  digitalWrite(Led_D, LEDOFF);
  digitalWrite(Led_E, LEDOFF);
  digitalWrite(Led_F, LEDOFF);
  digitalWrite(Led_G, LEDOFF);
  digitalWrite(Led_DOT, LEDOFF);
  
  Serial.begin(9600);
}

void zero(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDON);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDOFF);
  	digitalWrite (Led_DOT, LEDON);
}void one(){
	digitalWrite (Led_A, LEDOFF);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDOFF);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDOFF);
  	digitalWrite (Led_G, LEDOFF);
  	digitalWrite (Led_DOT, LEDON);
}void two(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDOFF);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDON);
  	digitalWrite (Led_F, LEDOFF);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
}void three(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDOFF);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
}void four(){
	digitalWrite (Led_A, LEDOFF);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDOFF);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
}void five(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDOFF);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
}void six(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDOFF);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDON);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
}void seven(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDOFF);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDOFF);
  	digitalWrite (Led_G, LEDOFF);
  	digitalWrite (Led_DOT, LEDON);
}void eight(){
  	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDON);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
}void nine(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDOFF);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
}



void showNum(int number){//funktio johon laitettu muuttuja
  switch(number){//muuttaa annettua muuttujaa
  	case 0:zero();break;//mikäli muuttuja on 0 se kutsuu funktion zero
    case 1:one();break;
    case 2:two();break;
    case 3:three();break;
    case 4:four();break;
    case 5:five();break;
    case 6:six();break;
    case 7:seven();break;
    case 8:eight();break;
    case 9:nine();break;
  }
}
	
void loop(){
	showNum(0);
  delay (viive);
  	showNum(1);
  delay (viive);
  	showNum(2);
  delay (viive);
  	showNum(3);
  delay (viive);
  	showNum(4);
  delay (viive);
  	showNum(5);
  delay (viive);
  	showNum(6);
  delay (viive);
  	showNum(7);
  delay (viive);
  	showNum(8);
  delay (viive);
  	showNum(9);
  	delay (viive);
}
