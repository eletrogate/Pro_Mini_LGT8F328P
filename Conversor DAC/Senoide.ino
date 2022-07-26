#define SAMPLES 255
byte table[SAMPLES];
void setup() {
  // put your setup code here, to run once:
  for (int i = 0; i < SAMPLES; i++) {
    table[i] = sin((float)i * TWO_PI / SAMPLES) * 127;
  }
  analogReference(DEFAULT);  // 5v
  // analogReference(EXTERNAL);      // REF PIN Voltage
  // analogReference(INTERNAL4V096); // 4.096V
  // analogReference(INTERNAL2V048); // 2.048v
  // analogReference(INTERNAL1V048); // 1.024v
  pinMode(DAC0, ANALOG);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (byte i = 0; i <= SAMPLES; i++) {
    analogWrite(DAC0, table[i]+127);
    delayMicroseconds(50);
  }
}