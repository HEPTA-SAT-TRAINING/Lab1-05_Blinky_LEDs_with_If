const int myleds[] = {25, 29, 24};
const int LED_COUNT = 3;
int i = 0;

void setup() {
  for(int i = 0; i < LED_COUNT; i++) {
    pinMode(myleds[i], OUTPUT);
  }
}

void loop() {
  if (i % 2 == 0) {
    digitalWrite(myleds[0], HIGH);
    digitalWrite(myleds[1], LOW);
    digitalWrite(myleds[2], LOW);
  } else {
    digitalWrite(myleds[0], LOW);
    digitalWrite(myleds[1], HIGH);
    digitalWrite(myleds[2], LOW);
  }

  i++;
  delay(1000);
}
