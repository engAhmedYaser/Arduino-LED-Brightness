// C++ code
//
const int led = 3;
int i =0;int n=1;
void setup()
{
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{i+=5;
  if( i>=0 && i<=255){
  analogWrite(led,i);  
   delay(250);Serial.println(i);} 
  else if(i>255 && i < 510){
   n+=2;
    analogWrite(led,i-5*n);delay(250);Serial.println(i-5*n); 
  }else{i=0;n=1;}
}