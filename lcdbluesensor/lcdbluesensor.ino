#include <SoftwareSerial.h>
#include <LiquidCrystal.h>
#include <Ultrasonic.h>

//trigger eco 
Ultrasonic sonar(3,4);
//7 y 8 los que habilita al lcd
//VSS(-)
//VDD(+)
//A(+)
//K(-)
//VO (contraste)potenciometro
//RS (ARDUINO) manda mensaje
//RW (-) escritura 
//E habilita pantalla
//d0 - d7 bits 

LiquidCrystal lcd(7,8,9,10,11,12);
SoftwareSerial BT(1,2);
int distancia = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin(9600);
  Serial.print("Configurando arduino ");
  lcd.begin(16,2);
  lcd.write("Configurando el LCD");
  
}

void loop() {
  if(BT.available()){
    Serial.write(BT.read());
  }
  if(Serial.available())
  {
     BT.write(Serial.read());
  }
  
  distancia = sonar.Ranging(CM);
   Serial.println("");
  Serial.print("La distancia es ");
  Serial.print(distancia);
  Serial.print(" cm");
  Serial.println("");
  delay(500);
  
 lcd.setCursor(0,0);
 lcd.print(distancia);
 delay(300);
}
