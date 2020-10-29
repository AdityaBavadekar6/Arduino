/* by AdityaBavadekar6 [29\10\2020] 
 *  On How to take input from serial com port
 *  .......................................................................
*/

int fromPC ;

void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600); // starts serial com port
}

void loop() {
  // put your main code here, to run repeatedly:
    while ( Serial.available == 0); // this will wait till you enter some data in serial communication
    fromPC = Serial.parseInt ;   // stores data from serial port (entered by you) in variable
    Serial.print(fromPC);
}
