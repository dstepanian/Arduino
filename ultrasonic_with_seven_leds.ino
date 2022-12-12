const int luys1 = 8;
const int luys2 = 7;
const int luys3 = 6;
const int luys4 = 5;
const int luys5 = 4;
const int luys6 = 3;
const int luys7 = 2;

#define trig 11
#define echo 12

int heravor;
long tevogh;


void setup() {

  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  Serial.begin(9600);

  pinMode(luys1, OUTPUT);
  pinMode(luys2, OUTPUT);
  pinMode(luys3, OUTPUT);
  pinMode(luys4, OUTPUT);
  pinMode(luys5, OUTPUT);
  pinMode(luys6, OUTPUT);
  pinMode(luys7, OUTPUT);

}

void loop() {

  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  tevogh = pulseIn(echo, HIGH);
  heravor = tevogh * 0.034 / 2;
  Serial.print("Heravorutyun: ");
  Serial.print(heravor);
  Serial.println(" cm");

  if (heravor <= 5) {
    digitalWrite(luys1, HIGH);
  }

  else {
    digitalWrite(luys1, LOW);
  }

  if (heravor <=7 ) {
    digitalWrite(luys2, HIGH);
  }

  else {
    digitalWrite(luys2, LOW);
  }

  if (heravor <= 10) {
    digitalWrite(luys3, HIGH);
  }

  else {
    digitalWrite(luys3, LOW);
  }

  if (heravor <= 15) {
    digitalWrite(luys4, HIGH);
  }

  else {
    digitalWrite(luys4, LOW);
  }

  if (heravor <= 17) {
    digitalWrite(luys5, HIGH);
  }
  else{
    digitalWrite(luys5, LOW);
  }

  if (heravor <= 20) {
    digitalWrite(luys6, HIGH);
  }

  else {
    digitalWrite(luys6, LOW);
  }

  if (heravor <= 25) {
    digitalWrite(luys7, HIGH);
  }
  else{
    digitalWrite(luys7, LOW);
  }
}
