// testing rgb
//


int Color[3] = {3, 4, 5};
char message[] = "akrifet ricxvi: G - mwvane, R - witeli, B - lurji";

void setup() 
{ 
  Serial.begin(9600);

pinMode(3, OUTPUT); // წითელი
pinMode(5, OUTPUT); // მწვანე
pinMode(4, OUTPUT); // ლურჯი

  Serial.println(message);

} 
void loop() 
{ 
  
  if (Serial.available() > 0)
{
  char num = Serial.read();
  
  if(num == 'b'){
  	digitalWrite(Color[1], HIGH);
    delay(500);
   digitalWrite(Color[1], LOW);
    delay(500);
  }else if(num == 'r'){
  	 digitalWrite(Color[0], HIGH);
    delay(500);
   digitalWrite(Color[0], LOW);
    delay(500);
  }else if (num == 'g'){
  	digitalWrite(Color[2], HIGH);
    delay(500);
   digitalWrite(Color[2], LOW);
    delay(500);
  }else{
  	  Serial.println('Error: Wrong letter');

  }
    
  }
}
  

