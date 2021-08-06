/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/


 #define LED 2
 #define CONSTANT_LED 7


// the setup function runs once when you press reset or power the board
void setup() {
    Serial.begin(9600);


    pinMode(LED, OUTPUT);

}

// Variables will change:
int ledState = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMicros = 0;        // will store last time LED was updated

void blink_pattern(int hz) {
  int sleep_time = 1000000/2/hz;
  int blink_time = 4; //the number of seconds to blink for
  int cycles = hz * blink_time;
  int count = 0;
  Serial.print(hz);
  Serial.print(" hz - Sleep Time: ");
  Serial.println(sleep_time);
  
  
  // check to see if it's time to blink the LED; that is, if the difference
  // between the current time and last time you blinked the LED is bigger than
  // the interval at which you want to blink the LED.
  unsigned long currentMicros= micros();
  unsigned long doneMicros=micros() + 4000000;

while (currentMicros < doneMicros) {
  currentMicros = micros();
  if (currentMicros - previousMicros >= sleep_time) {
    // save the last time you blinked the LED
    previousMicros = currentMicros;
    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(LED, ledState);
  }
}

}

// the loop function runs over and over again forever
void loop() {
  noTone(LED);
  Serial.println("100hz");
  tone(LED, 100);
  delay(3000);
  noTone(LED);
  Serial.println("200hz");
  tone(LED, 200);
  delay(3000);
  noTone(LED);
  Serial.println("300hz");
  tone(LED, 300);
  delay(3000);
  noTone(LED);
  Serial.println("400hz");
  tone(LED, 400);
  delay(3000);
  noTone(LED);
  Serial.println("500hz");
  tone(LED, 500);
  delay(3000);
  noTone(LED);
  Serial.println("600hz");
  tone(LED, 600);
  delay(3000);
  noTone(LED);
  Serial.println("700hz");
  tone(LED, 700);
  delay(3000);
  noTone(LED);
  Serial.println("800hz");
  tone(LED, 800);
  delay(3000);
  noTone(LED);
  Serial.println("900hz");
  tone(LED, 900);
  delay(3000);
  noTone(LED);
  Serial.println("1000hz");
  tone(LED, 1000);
  delay(3000);
  noTone(LED);
  /*
   blink_pattern(100);                   // wait for a second
   blink_pattern(200);
   blink_pattern(300);
   blink_pattern(400);
   blink_pattern(500);
   blink_pattern(600);
   blink_pattern(700);
   blink_pattern(800);
   blink_pattern(900);
   blink_pattern(1000);
    */
}
