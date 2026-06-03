#define ENCODER_A 22
#define ENCODER_B 23

volatile long encoderCount = 0;

void IRAM_ATTR readEncoder()
{
  int A = digitalRead(ENCODER_A);
  int B = digitalRead(ENCODER_B);

  if (A == B)
    encoderCount++;
  else
    encoderCount--;
}

void setup()
{
  Serial.begin(115200);

  pinMode(ENCODER_A, INPUT_PULLUP);
  pinMode(ENCODER_B, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(ENCODER_A), readEncoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(ENCODER_B), readEncoder, CHANGE);
}

void loop()
{
  Serial.print("Encoder Count: ");
  Serial.println(encoderCount);

  delay(100);
}