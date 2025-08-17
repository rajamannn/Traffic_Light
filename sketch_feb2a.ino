int red = 8;
int yellow = 6;
int green = 4;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop() {
  // Red light ON, others OFF
  digitalWrite(red, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(green, LOW);
  delay(5000); // Red stays on for 5 seconds
  
  // Yellow light ON, others OFF
  digitalWrite(red, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  delay(5000); // Yellow stays on for 5 seconds

  // Green light ON, others OFF
  digitalWrite(red, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  delay(5000); // Green stays on for 5 seconds
}
