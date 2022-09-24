void setup() {
  // put your setup code here, to run once:
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT); //defining pins as output
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//when program starts right green and left green should be ON and up Red and down red should be on so 
digitalWrite(3,0); //yellow LEDs
digitalWrite(6,0);
digitalWrite(9,0);
digitalWrite(12,0); 
digitalWrite(4,1);
digitalWrite(10,1);
digitalWrite(11,1);
digitalWrite(7,1); //now we have to give some delay
delay(5000);
//now all the yellow lights should be ON and all the previous LED should be off so
digitalWrite(4,0);
digitalWrite(10,0);
digitalWrite(11,0);
digitalWrite(7,0);
digitalWrite(3,1); //yellow LEDs
digitalWrite(6,1);
digitalWrite(9,1);
digitalWrite(12,1); 
//again some delay for yellow LEds
delay(1000);
//now we have to turn off all the yellow leds and we have to turn on the up down green and right left red so
digitalWrite(3,0); //yellow LEDs
digitalWrite(6,0);
digitalWrite(9,0);
digitalWrite(12,0); 
digitalWrite(8,1);
digitalWrite(5,1);
digitalWrite(2,1);
digitalWrite(13,1);
//again delay
delay(5000);
digitalWrite(8,0);
digitalWrite(5,0);
digitalWrite(2,0);
digitalWrite(13,0);
//YELLOW LEDS ON
digitalWrite(3,1); //yellow LEDs
digitalWrite(6,1);
digitalWrite(9,1);
digitalWrite(12,1);
delay(1000);
//now loop will be executed from Starting so we have to turn off the lights yello so 


}
