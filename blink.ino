int LED = 8;
int BTN = 7;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BTN, INPUT_PULLUP);
}

void loop() {
  int btn_state = digitalRead(BTN);
  if(btn_state == HIGH){
    digitalWrite(LED, LOW);
  } else {
    digitalWrite(LED, HIGH);
    delay(300);
    digitalWrite(LED, LOW);
    delay(300);
  }
}
