#include <DHT.h>
#include <LiquidCrystal.h>

DHT dht(8, DHT11);
LiquidCrystal lcd(12,11,5,4,3,2);

unsigned long previous_Time = 0;
const long interval = 2000;

void setup() {
  dht.begin();
  lcd.begin(16,2);
  pinMode(9, OUTPUT);
}

void loop() 
{unsigned long currentTime = millis();
if (currentTime - previous_Time >= interval) {
  previous_Time = currentTime;
float temp = dht.readTemperature();
float hum  = dht.readHumidity();
 if (isnan(temp) || isnan(hum)) {
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("Sensor Error");
 return;}

lcd.clear(); 

if (temp >= 32) {
digitalWrite(9, HIGH);
lcd.setCursor(0,0);
lcd.print("HIGH TEMP!");
lcd.setCursor(0,1);
lcd.print(temp);
lcd.print(" C");} 
else 
{digitalWrite(9, LOW);
lcd.setCursor(0,0);
lcd.print("Temp:");
lcd.print(temp);
lcd.print("C");
lcd.setCursor(0,1);
lcd.print("Hum:");
lcd.print(hum);
lcd.print("%");}}}