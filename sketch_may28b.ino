int freq = 800;

void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  
  
  tone(4, freq, 50);
  delay(50);
  tone(4, freq + 50, 50);
  delay(50);
  tone(4, freq + 100, 50);
  delay(50);
  tone(4, freq + 150, 50);
  delay(50);
}

void loop() {
  // put your main code here, to run repeatedly:

}
