int led = 13;
int nbrPas = 256;
int time = 2048 / nbrPas;
int delai = 2000;


void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void allumer() {
  digitalWrite(led, HIGH);
  Serial.println("Allume-2419796");
  delay(delai);
}

void clignotement() {
  int delai = 250;
  for (int i = 0; i < 6; i++) {
    digitalWrite(led, HIGH);
    delay(delai);
    digitalWrite(led, LOW);
    delay(delai);
  }
  Serial.println("Clignote-2419796");
}
void variation() {
  for (int i = 1; i < nbrPas; i++) {
    analogWrite(led, i);
    delay(time);
  }
}
void eteindre() {
  digitalWrite(led, LOW);
  delay(delai);
}



void loop() {
  // put your main code here, to run repeatedly:
  allumer();
  clignotement();
  variation();
  eteindre();
}
