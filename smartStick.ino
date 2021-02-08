  #define trigPin 9
  #define echoPin 8
  
  int Buzzer = 10;
  long duration;
  int distance;
  int safetyDistance;



void setup() {
  
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(Buzzer, OUTPUT);
  


}

void loop() {

  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  if (distance <= 15) {
  digitalWrite(Buzzer, HIGH);
  Serial.println(distance);
  
  } else {
    digitalWrite(Buzzer, LOW);
  }
  

  }


  
