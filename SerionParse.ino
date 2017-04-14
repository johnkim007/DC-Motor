int motorPin = 11;
int power = 0;

void setup() {
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if(Serial.available()){
    power = Serial.parseInt();
    if (power == 1 || power ==0){
      digitalWrite(motorPin, power);
    }
    Serial.println(power);
  }
}
