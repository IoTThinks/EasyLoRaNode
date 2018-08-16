// ====================================
// LED
// ====================================
// LEDs are connected anode to +5, cathode to i/o pin. Aka: Active LOW.
// So pin set to LOW will on the LED
String LED_Status = "Not initalized";

void setupLED() {
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  digitalWrite(LED_GREEN, HIGH);
  digitalWrite(LED_BLUE, HIGH);
  LED_Status = "OK";
}

void onLED_GREEN() {
  digitalWrite(LED_GREEN, LOW);
}

void offLED_GREEN() {  
  digitalWrite(LED_GREEN, HIGH);
}

void onLED_BLUE() {
  digitalWrite(LED_BLUE, LOW);
}

void offLED_BLUE() {  
  digitalWrite(LED_BLUE, HIGH);
}
