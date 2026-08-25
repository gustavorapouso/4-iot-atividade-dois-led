int buttonPin = 7;
int ledVermelho = 10;
int ledVerde = 11;
int i = 0;

void setup (){
  pinMode(ledVermelho, OUTPUT);
  pinMode(buttonPin, INPUT);
  pinMode(ledVerde, OUTPUT);
}

void loop(){
  
  if (digitalRead(buttonPin) == HIGH){
    i++;
 	if(i == 1){
   	 	digitalWrite(ledVermelho, HIGH);
   	 	digitalWrite(ledVerde, LOW);
    	delay(500);
  	}else if(i == 2){
    	digitalWrite(ledVermelho, LOW);
    	digitalWrite(ledVerde, HIGH);
    	delay(500);
  
  	}else if (i > 2){
    	 i=0;
  	} 
    if(i == 0){
    	digitalWrite(ledVermelho, LOW);
    	digitalWrite(ledVerde, LOW); 
   		delay(500);
    
   }
  }
}
