nsigned char value = 0;

void setup() {
  // put your setup code here, to run once:
  analogReference(INTERNAL2V56);
  pinMode(4, ANALOG);

  analogWrite(4, 255);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(4, value);
  delay(1);
  value += 1;
}