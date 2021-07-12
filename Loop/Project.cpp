int led = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;
int led9 = 5;
int led10 = 4;
int led11 = 3;
int led12 = 2;



void setup() {
  pinMode(led ,OUTPUT);
  pinMode(led2 ,OUTPUT);
  pinMode(led3 ,OUTPUT);
  pinMode(led4 ,OUTPUT);
  pinMode(led5 ,OUTPUT);
  pinMode(led6 ,OUTPUT);
  pinMode(led7 ,OUTPUT);
  pinMode(led8 ,OUTPUT);
  pinMode(led9 ,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led11 ,OUTPUT);
  pinMode(led12 ,OUTPUT);
}

void loop() {
 digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  {digitalWrite(led2, HIGH);
delay(100);
digitalWrite(led2, LOW);
delay(100);}
{digitalWrite(led3, HIGH);
delay(100);
digitalWrite(led3, LOW);
delay(100);}// wait for a second
digitalWrite(led4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(led4, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  {digitalWrite(led5, HIGH);
delay(100);
digitalWrite(led5, LOW);
delay(100);}
{digitalWrite(led6, HIGH);
delay(100);
digitalWrite(led6, LOW);
delay(100);}// wait for a second
digitalWrite(led7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(led7, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  {digitalWrite(led8, HIGH);
delay(100);
digitalWrite(led8, LOW);
delay(100);}
{digitalWrite(led9, HIGH);
delay(100);
digitalWrite(led9, LOW);
delay(100);}// wait for a secon
digitalWrite(led10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(led10, LOW);    // turn the LED off by making the voltage LOW
  delay(100); 
  {digitalWrite(led11, HIGH);
delay(100);
digitalWrite(led11, LOW);
delay(100);}
{digitalWrite(led12, HIGH);
delay(100);
digitalWrite(led12, LOW);
delay(100);}// wait for a second

{digitalWrite(led, HIGH);
delay(100);
digitalWrite(led, LOW);
delay(100);

digitalWrite(led11,HIGH);
digitalWrite(led10,HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led8,HIGH);

delay(100);

digitalWrite(led11,LOW);
digitalWrite(led10,LOW);
digitalWrite(led9,LOW);
digitalWrite(led8,LOW);

}
{
 digitalWrite(led7,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led4,HIGH);

delay(100);

digitalWrite(led7,LOW);
digitalWrite(led6,LOW);
digitalWrite(led5,LOW);
digitalWrite(led4,LOW); 
 
  
  }


{
 digitalWrite(led3,HIGH);
digitalWrite(led2,HIGH); 

delay(100);

digitalWrite(led3,LOW);
digitalWrite(led2,LOW); 
    
    
   }

 {
digitalWrite(led11,HIGH);
digitalWrite(led10,HIGH);
digitalWrite(led9,HIGH);
digitalWrite(led8,HIGH);
digitalWrite(led7,HIGH);
digitalWrite(led6,HIGH);
digitalWrite(led5,HIGH);
digitalWrite(led4,HIGH);
digitalWrite(led3,HIGH);
digitalWrite(led2,HIGH); 

delay(100);

digitalWrite(led11,LOW);
digitalWrite(led10,LOW);
digitalWrite(led9,LOW);
digitalWrite(led8,LOW);
digitalWrite(led7,LOW);
digitalWrite(led6,LOW);
digitalWrite(led5,LOW);
digitalWrite(led4,LOW); 
digitalWrite(led3,LOW);
digitalWrite(led2,LOW);  
  
  
  
  } 



}