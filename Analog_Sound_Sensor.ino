void setup()
{
  Serial.begin(9600); //OPEN SERIAL PORT , SET BAUD RATE TO 9600
}
void loop(){
  int val;
  val = analogRead(A0); // connect mic sensor to Analog 0
  Serial.println(val,DEC);
  delay(100);
}
