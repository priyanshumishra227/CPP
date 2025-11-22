#include <iostream>
using namespace std ;

int main(){

/*
    int - stores integers (whole numbers), without decimals, such as 123 or -123
    double - stores floating point numbers, with decimals, such as 19.99 or -19.99
    char - stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
    string - stores text, such as "Hello World". String values are surrounded by double quotes
    bool - stores values with two states: true or false
*/

// we can do both declare and assign value to variable together like in below examples or check line 45 

int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false)

// we use \n or endl to get the result in new line just as <br> tag in html 

cout<<myNum<<"\n";  
cout <<myFloatNum<<"\n";
cout << myLetter<<"\n";
cout<<myText<<"\n";
cout<<myBoolean<<"\n";


// Multiple varibles 

// declare many variables 

int a = 5 , b = 3 , c = 4;
cout << a <<endl;
cout << b <<endl;
cout << c <<endl;


// one value to many variables 



int x ,y,z;  // we can declare variables without giving values and then give values to them later 
x = y= z = 10;
cout << x <<endl;
cout << y <<endl;
cout << z <<endl;

}