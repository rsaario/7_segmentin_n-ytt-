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
  	Serial.println("0");
}void one(){
	digitalWrite (Led_A, LEDOFF);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDOFF);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDOFF);
  	digitalWrite (Led_G, LEDOFF);
  	digitalWrite (Led_DOT, LEDON);
  	Serial.println("1");
}void two(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDOFF);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDON);
  	digitalWrite (Led_F, LEDOFF);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
  	Serial.println("2");
}void three(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDOFF);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
  	Serial.println("3");
}void four(){
	digitalWrite (Led_A, LEDOFF);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDOFF);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
  	Serial.println("4");
}void five(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDOFF);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
  	Serial.println("5");
}void six(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDOFF);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDON);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
  	Serial.println("6");
}void seven(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDOFF);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDOFF);
  	digitalWrite (Led_G, LEDOFF);
  	digitalWrite (Led_DOT, LEDON);
  	Serial.println("7");
}void eight(){
  	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDON);
  	digitalWrite (Led_E, LEDON);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
  	Serial.println("8");
}void nine(){
	digitalWrite (Led_A, LEDON);
  	digitalWrite (Led_B, LEDON);
  	digitalWrite (Led_C, LEDON);
  	digitalWrite (Led_D, LEDOFF);
  	digitalWrite (Led_E, LEDOFF);
  	digitalWrite (Led_F, LEDON);
  	digitalWrite (Led_G, LEDON);
  	digitalWrite (Led_DOT, LEDON);
  	Serial.println("9");
}


//funktio johon laitettu muuttuja
void showNum(int number){
  //muuttaa annettua muuttujaa
  switch(number){
    //mikäli muuttuja on 0 se kutsuu funktion zero
  	case 0:zero();;break;
	/*break lopettaa haun funktiosta, jos ei ole muistanut tätä funktio 
    ei pysähdy kyseisen tapauksen kohdalle 
    ja hyppää kyseisen tapauksen yli*/
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
//kutsuu sen sisällä olevia funktioita	
void loop(){
//kutsuu kyseistä funktiota muuttujan arvolla 0
  showNum(0);
/*pitää määritetyn mittaisen tauon jonka jälkeen 
jatkaa funktioitten kutsumista*/
  delay (viive);
//kutsuu funktiota muuttujalla 1
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
