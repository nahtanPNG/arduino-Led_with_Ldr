byte portalLDR = A3;
byte saidaLed = 7;

int valor_ldr = 0;

void setup(){
Serial.begin(9600);

Serial.printl("Inicializando..");

pinMode(portalLDR, INPUT);
pinMode(saidaLed, OUTPUT);
pinMode(LED_BUILTIN, OUTPUT);

}

void loop(){
valor_ldr = analogRead(portalLDR);
Serial.println(valor_ldr);
if(valor_ldr >= 400){
Serial.println("maior que 400");
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);     
  }
else{
Serial.println("Menor que 400");
digitalWrite(LED_BUILTIN, LOW); 
  delay(1000);
  }
}



  
