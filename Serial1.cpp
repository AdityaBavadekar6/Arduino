/*Created By Aditya Bavadekar on Friday 16 Oct at 2:45*/
/* Run this program when arduino is connected to pc 
and then open serial moniter that is icon button 
of a magnifing glass */

void setup (){
Serial.begin(9600) // Initialises serial communication
Serial.println('What is Your name Guy? :'); //This prints "What is your name Guy? : "
While(Serial.begin == 0); // Waits until users input
int Username = serial.parseInt();. //Stores input data in variable named "Username"
Serial.println('Name : ' + Username);. // Prints " Name : " and inputed name
Serial.println('What is Your age Guy? :');  //This prints "What is your age Guy? : "
While(Serial.available == 0);. //waits until users input
int Userage = serial.parseInt(); // Prints " Age : " and inputed name
Serial.println('Age : ' + Userage);  // Prints " Age : " and inputed name
}

void loop(){

}
