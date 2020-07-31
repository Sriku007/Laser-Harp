const int pin1 = A5;
const int pin2 = A4;
const int pin3 = A3;
const int pin4 = A2;
const int pin5 = A1;
const int pin6 = A0;


void setup() {
  Serial.begin(9600);
}

void loop() {
  int sound1 = analogRead(pin1);
  int sound2 = analogRead(pin2);
  int sound3 = analogRead(pin3);
  int sound4 = analogRead(pin4);
  int sound5 = analogRead(pin5);
  int sound6 = analogRead(pin6);

  //sound 1
  if (sound1 < 600) {
    sound1 = 1;
  }
  else {
    sound1 = 0;
  }
  //sound 2
  if (sound2 < 600) {
    sound2 = 1;
  }
  else {
    sound2 = 0;
    
  }
  //sound 3  
  if (sound3 < 600) {
    sound3 = 1;
  }
  else {
    sound3 = 0;
  }
  //sound 4  
  if (sound4 < 600) {
    sound4 = 1;
  }
  else {
    sound4 = 0;
  }
  //sound 5 
  if (sound5 < 600) {
    sound5 = 1;
  }
  else {
    sound5 = 0;
  }
  //sound 6
  if (sound6 < 600) {
    sound6 = 1;
  }
  else {
    sound6 = 0;
  }

/*  Serial.println((String)0 + "," + (String)sound1 + "," + (String)sound2 + "," + (String)sound3 + "," + (String)sound4 + "," + (String)sound5 + "," + (String)sound6  "*");
  */
  Serial.println(sound6);
  if (sound1==0){
    tone(8, 440, 100);
  }
  if (sound4==0){
    tone(8, 392, 100);
  }
  if (sound3==0){
    tone(8, 349.23, 100);
  }
  if (sound2==0){
    tone(8, 329.63, 100);
  }
  
  delay(20);
}
