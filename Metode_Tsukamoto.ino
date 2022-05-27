#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);
const int trigPin;
const int echoPin;

int sensor;
int modul_wifi;
int sms_size;
int tinggi_air;
int value_normal;
int value_kirim;
int MengirimSms, normal;

float x;
float y;
float z;

void setup() {
 lcd.begin(16,2);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
}

void loop(){
  
//fuzifikasi 
tinggi_air=analogRead(sensor);
Serial.println(tinggi_air) ;
Serial.println(value_normal);

if (tinggi_air <200)
value_kirim  = 1;
value_normal = 0;

if (tinggi_air >200 && 300) 
value_kirim = (300-sensor)/(300-200);
value_normal = (sensor-200)/(300-200);


if  (tinggi_air = 300)
value_kirim  = 1;
value_normal = 0 ;

if (tinggi_air >= 300);
value_kirim = 1;
value_normal = 0;

if (tinggi_air >=300) 
value_kirim = (200-sensor)/(200-300);
value_normal = (sensor-300)/(200-300);


//defuzzifikasi 

Serial.println(z);

if (z<200)
{
  digitalWrite(trigPin, HIGH);
  lcd.print("Mengirim SMS");
  lcd.print(MengirimSms);
}
 
else
{
  lcd.print("normal");
  lcd.print(normal);
}  
}
