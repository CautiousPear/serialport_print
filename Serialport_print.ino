int waitT=750;
float pi=3.14;
float r=2;
float area;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
area=pi*r*r;
Serial.print("A circle with radius ");
Serial.print(r);
Serial.print(" has an area of ");
Serial.print(area);
Serial.println(".");
delay(waitT);
r=r+.5;
}
