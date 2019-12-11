/*

   ========== A Fucking Rubber Band Gun ===============
   
                You will need:
                   -> Servo
                   -> Wires (who would have guessed?)
                   -> Button
                   -> LEGOs
                   -> Rubber Bands
                   -> Glue that won't fucking break if you touch it
                   -> An Arduino UNO (If you are broke and it's all you have)
                   -> The source code here
                   -> DC Power supply
                   -> Solder (If you want, but I am young as fuck so I did not use it)
      Instructions:
           1. Copy-Paste this into Arduino IDE
           2. Upload to the board
           3. Build the gun
           4. Use the gun on your close relatives (actually don't do that)
           
           
   Note: If you see this, then you probably shouldn't be here

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
  // If button down, servo goes down. fucking logic
  
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
