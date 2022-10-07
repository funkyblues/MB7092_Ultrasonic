const int anPin = 0;
long anVolt, cm, inches;
void setup() {
  Serial.begin(57600);
}
void read_sensor(){
  anVolt = analogRead(anPin);
  cm = anVolt;
}
void print_range(){
  Serial.print(cm);
}
void loop() {
  read_sensor();
  print_range();
  delay(1000);
}
