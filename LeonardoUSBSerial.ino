void setup() {
  Serial.begin(9600);
  Serial1.begin(38400);
}

void loop() {
  if(Serial1.available()) {
    Serial.write(Serial1.read());
  }
}

