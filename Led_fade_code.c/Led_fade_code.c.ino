// led fade
#define ledPin 2
int brightness = 0; 
int fadevalue = 2;

void setup() {
 pinMode(ledPin,OUTPUT);

}

void loop() {
 analogWrite(ledPin, brightness);

 brightness = brightness + fadevalue;

 if(brightness<=0 || brightness>=225){
  fadevalue = -fadevalue;
 }  
 delay(30);
}
