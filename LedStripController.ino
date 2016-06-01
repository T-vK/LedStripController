const int red =  10;
const int green =  9;
const int blue =  8;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
    digitalWrite(red, HIGH);
    delay(50);
    digitalWrite(green, HIGH);
    delay(50);
    digitalWrite(blue, HIGH);
    delay(50);
    digitalWrite(red, LOW);
    delay(50);
    digitalWrite(green, LOW);
    delay(50);
    digitalWrite(blue, LOW);
    delay(50);
}

