#define SOUND_SPEED 0.0344
const int trig = 27; //output
const int echo = 35; //input

long duration {}
float distance {}
 

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 
 //make sure trig pin is low
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  //send signal
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

 // read time taken to receive echo
    duration = pulseIn(echo, HIGH);
 //calculate distance
 distance = (duration * SOUND_SPEED)/2;
   
  Serial.print("Distance is: ");
  Serial.println(distance);

  delay(1000);
  

}
