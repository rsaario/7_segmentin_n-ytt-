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
  Serial.begin(9600);
}

int viive = 1000;

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


void loop()
{
 zero();
  delay(viive);
 one();
  delay(viive);
 two();
  delay(viive);
 three();
  delay(viive);
 four();
  delay(viive);
 five();
  delay(viive);
 six();
  delay(viive);
 seven();
  delay(viive);
 eight();
  delay(viive);
 nine();
  delay(viive);
}


