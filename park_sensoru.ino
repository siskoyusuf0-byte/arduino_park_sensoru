
const int trigPin = 9;    
const int echoPin = 10;   
const int ledPin = 13;    
const int buzzerPin = 8;  

long sure;
int mesafe;

void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);  
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT); 
  
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  sure = pulseIn(echoPin, HIGH);
  mesafe = sure * 0.034 / 2; 

   
  if (mesafe > 0 && mesafe < 30) { 
    digitalWrite(ledPin, HIGH);
    
    if (mesafe < 5) {
      
      tone(buzzerPin, 1000); 
    } else {
      
      tone(buzzerPin, 1000);
      delay(mesafe * 10); 
      noTone(buzzerPin);
      delay(mesafe * 10);
    }
  } else {
  
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  delay(50);
}
