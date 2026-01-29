/* Equipo #2
Ayala Hernández Omar Daniel
Herrera Coss y León Andrea Sofía
*/

void setup() {
  Serial.begin(9800); // Initializes communication with the serial port
}

void loop() {
  int num = 0;
  if (Serial.available() > 0 ) {  // Checks whether a character has been typed on the console
    num = Serial.read();         // Reads the character as an integer
    if (num != 10){             // Avoids printing the \n character
      Serial.println(num);
    }
  }

}
