// Created By AdityaBavadekat6 [29/10/2020]


int number ;

void setup() {

    Serial.begin(9600);. // Serial com port initialization
}

void loop() {

  for (int number = 0; number <= 100; i++)
// this is how we start for loop
// we write "for" ( initialization code ; condition ; increments ; )
// then in braces main condition
{
    Serial.print(number);
    delay(1000);
}
             }
// we assign a value to variable then write condition that 
// till the variable has value of 100 execute code at same time 
// increment value of variable by one each time the code is executed

