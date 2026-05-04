#define led1 7
#define led2 2

void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop() {
  digitalWrite(led1, HIGH);
  digitalWrite(led2, HIGH);
  Serial.println("LEDs ON");
  delay(1000);

  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  Serial.println("LEDs OFF");
  delay(1000);
}