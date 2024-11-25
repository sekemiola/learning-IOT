int gas_sensor = 34;
int led = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin (115200);
  pinMode (gas_sensor, INPUT);
  pinMode (led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int reading = analogRead (gas_sensor);

  Serial.println (reading);
  if (reading > 1700) {
    digitalWrite{led, HIGH};
    delay (1000);
    digitalWrite(led, LOW);
  }
  delay (1000);
}
