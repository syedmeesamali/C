const int ldrPin = A0;

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(ldrPin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int ldrStatus = analogRead(ldrPin);
  if (ldrStatus <= 200) 
  {
    digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second  
    digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);                       // wait for a second
  } else 
  {
    digitalWrite(LED_BUILTIN, LOW);    // Enough light
    Serial.print("Enough light now - Turn off LED");
    Serial.println(ldrStatus);
  }
  
  
} //End of loop
