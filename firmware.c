
void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = PINB;
  Serial.println(sensorValue);
  delay(500);
}
