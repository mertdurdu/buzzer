
#define trig 4 //mic
#define echo 3  //hop
#define buzzer 7
long sure,uzaklik;
void setup() {
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  mesafe();
  if(uzaklik>40){
    digitalWrite(buzzer,LOW);
    
  }
  if(uzaklik<=40 && uzaklik>30){
    digitalWrite(buzzer,HIGH); 
    delay(1000);
    digitalWrite(buzzer,LOW); 
    delay(1000);
  }
   if(uzaklik<=30 && uzaklik>20){
    digitalWrite(buzzer,HIGH); 
    delay(500);
    digitalWrite(buzzer,LOW); 
    delay(500);
   }
   if(uzaklik<=20 && uzaklik>10){
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW); 
    delay(200);
   }
    if(uzaklik<=10 && uzaklik>2){
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW); 
    delay(100);
   }
  Serial.println(uzaklik);
  
  
  
  
  
  

}
