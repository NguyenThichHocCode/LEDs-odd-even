int led[] = {3, 4, 5, 6, 7, 8, 9, 10};
int i;
void setup() {
  for (i = 0; i < 8; i++) {
    pinMode(led[i], OUTPUT);

  }

}
void OnOddLeft() {
  for (i = 0; i < 8; i = i + 2) {
    digitalWrite(led[i], HIGH);
    delay(500);

  }
}
void OnEvenLeft() {
  for (i = 1; i < 8; i = i + 2) {
    digitalWrite(led[i], HIGH);
    delay(500);
  }
}
void Off() {
  for (i = 0; i < 8; i++) {
    digitalWrite(led[i], LOW);
  }
}
void OnOddRight() {
  for (i = 7; i >= 0; i = i - 2) {
    digitalWrite(led[i], HIGH);
    delay(500);
  }
}
void OnEvenRight() {
  for (i = 6; i >= 0; i = i - 2) {
    digitalWrite(led[i], HIGH);
    delay(500);
  }
}
void loop() {

  Off();
  OnOddLeft();
  OnEvenLeft();
  delay(1000);
  Off();
  delay(1000);
  OnOddRight();
  OnEvenRight();


}
