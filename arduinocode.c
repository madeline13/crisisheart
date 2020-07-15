/*
 * arduinocode.c
 *
 *  Created on: 2020-7-15 13:11:38
 *      Author: https://github.com/madeline13
 */

/* These lines allow the Arduino to vibrate randomly to keep you mindful of your own state of mind, even in ordinary times.*/

/***********************************************/
/* - - - - - - - include - begin - - - - - - - */

/* - - - - - - - include - - end - - - - - - - */
/***********************************************/

/*************************************************/
/* - - - - - - - variables - begin - - - - - - - */
int vibe = 9;      /*may have to change*/
int switchPin = 2; /*may change depending on board used*/
int switchValue;

long randNumber;
/* - - - - - - - variables - - end - - - - - - - */
/*************************************************/

/***************************************************/
/* - - - - - - - static func - begin - - - - - - - */

/* - - - - - - - static func - - end - - - - - - - */
/***************************************************/

/*************************************************/
/* - - - - - - - Functions - begin - - - - - - - */
void setup()
{
  pinMode(vibe, OUTPUT);
  pinMode(switchPin, INPUT);
  digitalWrite(switchPin, HIGH);
  randomSeed(analogRead(0));
  delay(1);
}

void loop()
{
  randNumber = random(20);
  if (randNumber == 15)
  {
    digitalWrite(vibe, HIGH);
    delay(2000);
  }
  else
  {
    digitalWrite(vibe, LOW);
    delay(360000);
  }

  switchValue = digitalRead(switchPin);
  if (switchValue == LOW)
  {
    digitalWrite(vibe, HIGH);
  }
  else
  {
    digitalWrite(vibe, LOW);
  }
}
/* - - - - - - - Functions - - end - - - - - - - */
/*************************************************/
