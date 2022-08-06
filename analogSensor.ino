int ThermistorPin = A0;
int Vo;
void setup() {
  Serial.begin(9600);
}
void loop() {
  Vo = analogRead(ThermistorPin);
  Serial.print("Temperature: "); 
  Serial.println(Vo); 
  delay(500);
}
