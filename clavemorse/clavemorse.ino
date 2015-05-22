#include <SoftwareSerial.h>

SoftwareSerial bt(2,3);
int pin1 = 2;
int pin2 = 4;

void setup() {
  // Gálvez R. Angel Alexander 6IM6
  Serial.begin(9600);
  bt.begin(9600);
  
  pinMode(pin1,OUTPUT);
  pinMode(pin2,OUTPUT);
  digitalWrite(pin1, LOW);
  digitalWrite(pin2, LOW);
  
}

void loop() {
  char prender;
  
  if(Serial.available() > 0)
  {
    prender = Serial.read();
  }
  
  switch(prender){
    case 'a':
      punto();
      raya();
      Serial.println("a");
     break;
     
    case'b':
      raya();
      punto();
      punto();
      punto();
      Serial.println("b");
     break;
    
    case'c':
      raya();
      punto();
      raya();
      punto();
      Serial.println("c");
     break;
    
    case'd':
      raya();
      punto();
      punto();
      Serial.println("d");
     break;
    
    case'e':
      punto();
      Serial.println("e");
     break;
    
    case'f':
      punto();
      punto();
      raya();
      punto();
      Serial.println("f");
     break;
    
    case'g':
      raya();
      raya();
      punto();
      Serial.println("g");
     break;
    
    case'h':
      punto();
      punto();
      punto();
      punto();
      Serial.println("h");
     break;
    
    case'i':
      punto();
      punto();
      Serial.println("i");
     break;
    
    case'j':
      punto();
      raya();
      raya();
      raya();
      Serial.println("j");
     break;
    
    case'k':
      raya();
      punto();
      raya();
      Serial.println("k");
     break;
    
    case'l':
      punto();
      raya();
      punto();
      punto();
      Serial.println("l");
     break;
    
    case'm':
      raya();
      raya();
      Serial.println("m");
     break;
    
    case'n':
      raya();
      punto();
      Serial.println("n");
     break;
    
    case'o':
      raya();
      raya();
      raya();
      Serial.println("o");
     break;
    
    case'p':
      punto();
      raya();
      raya();
      punto();
      Serial.println("p");
     break;
    
    case'q':
      raya();
      raya();
      punto();
      raya();
      Serial.println("q");
     break;
    
    case'r':
      punto();
      raya();
      punto();
      Serial.println("r");
     break;
    
    case's':
      punto();
      punto();
      punto();
      Serial.println("s");
     break;
    
    case't':
      raya();
      Serial.println("t");
     break;
     
    case'u':
      punto();
      punto();
      raya();
      Serial.println("u");
     break;
    
    case'v':
      punto();
      punto();
      punto();
      raya();
      Serial.println("v");
     break;
    
    case'w':
      punto();
      raya();
      raya();
      Serial.println("w");
     break;
    
    case'x':
      raya();
      punto();
      punto();
      raya();
      Serial.println("x");
     break;
    
    case'y':
      raya();
      punto();
      raya();
      raya();
      Serial.println("y");
     break;
    
    case'z':
      raya();
      raya();
      punto();
      punto();
      Serial.println("z");
     break;
    
    case'1':
      punto();
      raya();
      raya();
      raya();
      raya();
      Serial.println("1");
     break;
     
    case'2':
      punto();
      punto();
      raya();
      raya();
      raya();
      Serial.println("2");
     break;
     
    case'3':
      punto();
      punto();
      punto();
      raya();
      raya();
      Serial.println("3");
     break;
     
    case'4':
      punto();
      punto();
      punto();
      punto();
      raya();
      Serial.println("4");
     break;
     
   case'5':
      punto();
      punto();
      punto();
      punto();
      punto();
      Serial.println("5");
     break;
     
   case'6':
      raya();
      punto();
      punto();
      punto();
      punto();
      Serial.println("6");
     break;
     
   case'7':
      raya();
      raya();
      punto();
      punto();
      punto();
      Serial.println("7");
     break;
     
   case'8':
      raya();
      raya();
      raya();
      punto();
      punto();
      Serial.println("8");
     break;
     
   case'9':
      raya();
      raya();
      raya();
      raya();
      punto();
      Serial.println("9");
     break;
     
   case'0':
      raya();
      raya();
      raya();
      raya();
      raya();
      Serial.println("0");
     break;
     
    
    default:
      Serial.println("ERROR");
  }
}
  
  
void punto(){
  digitalWrite(pin1, HIGH);
  delay(500);
  digitalWrite(pin1, LOW);
  delay(1000);
}

void raya(){
    digitalWrite(pin2, HIGH);
    delay(2000);
    digitalWrite(pin2, LOW);
    delay(3000);
}
    
    
    
    /* if(prender =='a')
    {
      digitalWrite(pin6,HIGH);
      bt.println("Ola k ase");
    }
     if(prender =='0')
        {
          digitalWrite(13,LOW);
          bt.println("led apagado");
        }
        else{
          Serial.println(prender);
        }
      */
       

