void setup() {
  // put your setup code here, to run once:
  pinMode(12,INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
   int status;
   status = digitalRead(12);
   if(status == LOW)
   Serial.println("Switch pressed");
   else
   Serial.println("Switch not pressed");
   delay(1000);
}
