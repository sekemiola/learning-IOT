int touch_pin = 4;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Big shekz touch sensor project");
  pinMode(touch_pin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int value = digitalRead(touch_pin);
  Serial.println(value);
  delay(1000);  
}
