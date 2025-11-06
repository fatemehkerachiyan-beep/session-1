int buttonPin = 8;
int ledPin = 2;
int buttonState = 0;                                                                                            
void setup() {
  digitalWrite(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  // put your setup code here, to run once:

}
void loop() {
  buttonState = digitalRead(buttonPin);
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
// put your main code here, to run repeatedly:

