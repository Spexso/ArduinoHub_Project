int inc = 0;
void setup() {
  Serial.begin(9600);
  pinMode(8, INPUT);
  pinMode(13,OUTPUT);
  
}

void loop() 
{
  
  int num;
  int squ;
  
  while(Serial.available() > 0)
  {
    char input = Serial.read();
    
    if(input=='0')
   {
    exit(0);
   }
   
   else if(input=='1')
    {
    digitalWrite(13,HIGH);
   }
   
   else if(input=='2')
   {
    digitalWrite(13,LOW);
   }
   
   else if(input=='3')
   {
    for(int i=0;i<3;++i)
    {
    digitalWrite(13,HIGH);
    delay(500);
    digitalWrite(13,LOW);
    delay(500);
    }
   }

  else if(input=='4')
  {
    Serial.flush();
    delay(3000);
    if(Serial.available() > 0)
    {
    num = Serial.parseInt();
    squ = num * num ;
    Serial.print("Square of your number is:");
    Serial.print(squ);
    }

  }
  
  else if(input=='5')
  {
    while(1)
    {
      if(digitalRead(8) == 1)
      {
        Serial.print(inc);
        inc++;
        delay(500);
      }
      else
      {
        Serial.print(inc);
      }
      delay(2000);
    }
 }

}

}    
   
   
   
  
