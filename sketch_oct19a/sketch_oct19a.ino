void setup() {
  // code once 
Serial.begin(9600);
pinMode(7, OUTPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);



}
int val =0;
void loop() {
  // repeat 
val=analogRead(0);
Serial.println(val);
digitalWrite(7, LOW);
digitalWrite(2, LOW);
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);

if(val > 205)
{
  digitalWrite(7, HIGH);   
 
}

if(val > 310)
{
  digitalWrite(2, HIGH);
}

if(val > 420 )
{
  digitalWrite(3, HIGH);
}

if(val > 540)
{
  digitalWrite(4, HIGH);
}

if(val > 600)
{
  digitalWrite(5, HIGH);
}



}
