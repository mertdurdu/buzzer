void mesafe(){
  digitalWrite(trig,LOW);
  delayMicroseconds(5);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  delayMicroseconds(10);
  
  
   
  
  
 
  sure=pulseIn(echo,HIGH);
  uzaklik=sure/29.1/2;
  
}
