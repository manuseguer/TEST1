void setup() {
  Serial.begin(115200);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);

  Serial.println("");
  Serial.println("Hello, XIAO ESP32-C3!");
  Serial.println("Welcome to Wokwi :-)");
}

void loop() {
  Serial.println("Red");
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);

  Serial.println("Green");
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);

  Serial.println("Blue");
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
}
