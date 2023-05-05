
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int sensorRead = analogRead(A0);
  int ledblink = map(sensorRead,200,600,0,255);
  //if(ledblink<0)ledblink=0;
  analogWrite(12,ledblink);
  delay(100);
}
