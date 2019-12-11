/*

   ========== A LEGO Rubber Band Gun ===============
   
                You will need:
                   -> Servo
                   -> Wires (who would have guessed?)
                   -> Button
                   -> LEGOs
                   -> Rubber Bands
                   -> Glue
                   -> An Arduino UNO (If you are broke and it's all you have)
                   -> The source code provided here
                   -> DC Power supply
      Instructions:
           1. Copy-Paste this into Arduino IDE
           2. Upload to the board
           3. Build the gun
           4. Shoot your friends and family (actually don't do that)
           

*/

#include <Servo.h>

// The servo that releases the band is on pin 9
Servo hammer;

// The button to fire is on pin 8
int triggerpin = 8;


void setup()
{
  // setup servo and button
  
  pinMode(triggerpin, INPUT);
  hammer.attach(9);
}

void loop()
{
  // If button pressed, servo goes down
  
  if (digitalRead(triggerpin))
  {
    hammer.write(90);
  }
  else
  {
    hammer.write(0);
  }
  delay(50);  
}
