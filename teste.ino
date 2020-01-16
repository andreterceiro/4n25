int a;

void setup() {
    pinMode(11, OUTPUT);
    pinMode(12, INPUT); 
}

void loop() {
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
    delay(1000);
}
