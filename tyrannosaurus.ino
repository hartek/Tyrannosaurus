int led = 6;
int led2 = 10;
int pir = 8; 
int buzz = 9; 

int motor_1_delante = 2;
int motor_1_detras = 3; 
int motor_1_pwm = 5; 

void setup() {                
  pinMode(led, OUTPUT);  
  pinMode(led2, OUTPUT);  
  pinMode(pir, INPUT);     
  pinMode(buzz, OUTPUT);    
  
  pinMode(motor_1_delante, OUTPUT);
  pinMode(motor_1_detras, OUTPUT); 
  pinMode(motor_1_pwm, OUTPUT); 
  
  analogWrite(motor_1_pwm, 255); 
}

void loop() {
  int pir_value = digitalRead(pir); 
  //int pir_value = HIGH; 
  if (pir_value == HIGH) {
    digitalWrite(led, HIGH); 
    digitalWrite(led2, LOW); 
    tone(buzz, 1976); 
    digitalWrite(motor_1_delante, HIGH); 
    digitalWrite(motor_1_detras, LOW); 
    delay(250); 
    
    digitalWrite(led, LOW); 
    digitalWrite(led2, HIGH); 
    tone(buzz, 1865); 
    digitalWrite(motor_1_delante, LOW); 
    digitalWrite(motor_1_detras, HIGH); 
    delay(250); 
  }
  else {
    digitalWrite(led, LOW); 
    digitalWrite(led2, LOW); 
    digitalWrite(motor_1_delante, LOW); 
    digitalWrite(motor_1_detras, LOW); 
    noTone(buzz); 
  }
}
