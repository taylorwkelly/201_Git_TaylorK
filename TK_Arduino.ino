//https://wokwi.com/projects/345888534275555923

#define POT A0
#define LED 13



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(POT, INPUT);
  pinMode(LED, OUTPUT);

}

int rate = 0;
void loop() {
  // put your main code here, to run repeatedly:
  rate = analogRead(POT);
  Serial.println(analogRead(POT));
  if (rate<200){
    rate = 200;
  }
  if (rate>950){
    rate = 0;
  }
  digitalWrite(LED, HIGH);
  delay(rate);
  digitalWrite(LED, LOW);
  delay(rate);
  

  
}
