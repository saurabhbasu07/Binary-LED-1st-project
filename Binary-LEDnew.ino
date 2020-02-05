int led[5]={8,9,10,11,12};
void setup() {
  for(int i=0;i<5;i++)
  {
    pinMode(led[i],OUTPUT);
  }
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  int a[5];
  int b;
  b=Serial.read();
  for(int i=0;i<5;i++)
  {
    a[i]=b%2;
    b=(b)/2;
  }
  for(int i=0;i<5;i++)
  {
    if(a[i])
   digitalWrite(led[i],HIGH);
   else 
   digitalWrite(led[i],LOW);
  }
  
  for(int i=0;i<5;i++)
  Serial.println(a[i]);
  // put your main code here, to run repeatedly:

}
