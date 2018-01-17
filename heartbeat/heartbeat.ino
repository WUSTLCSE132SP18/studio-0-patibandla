void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(13, HIGH);
  delay(10);
  digitalWrite(13, LOW);
  Serial.print(millis()/1000);
  Serial.print(" sec have elapsed, ");
  Serial.print(millis());
  Serial.println(" ms have elapsed");
}
