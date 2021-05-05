#define LED_PWR 25
#define LED 6
#define LEDSTEADY 5

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  while (!Serial);

  pinMode(LED, OUTPUT);
  pinMode(LEDSTEADY, OUTPUT);
  digitalWrite(LEDSTEADY, HIGH);
}


// the loop function runs over and over again forever
void loop() {
  for (int i = 30; i <= 100; i = i + 10) {
    noTone(LED);
    Serial.print(String(i));
    Serial.println("hz");
    tone(LED, i);
    delay(3000);
  }
  /*
    noTone(LED);
    Serial.println("30hz");
    tone(LED, 30);
    delay(3000);
  */
}
