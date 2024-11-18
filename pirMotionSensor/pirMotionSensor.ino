int pir_sensor = 36;
int led = 14;
void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);
  Serial.println ("Starting PIR motion detector");
  pinMode (pir_sensor, INPUT);
  pinMode (led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = digitalRead (pir_sensor);
  Serial.println (reading);
  delay(1000);
  if (reading == 1) {
    digitalWrite(led, HIGH);
  }
  else {
    digitalWrite(led, LOw);
  }

}
