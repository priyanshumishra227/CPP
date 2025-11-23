#include <iostream>
#include <string>
using namespace std;

int main() {
/*
compiler will confuse if you use a double quotes in the string .

E.g. "We live on the "planet" named Earth " 

In the above example the compiler will think that one string has ended before planet and other will started at the end of planet so it will through an error . 

To escape from this error we use / escape chacters .
*/

string txt = "We are the so-called \"humans\" from Earth.";
string txt = "It\'s alright.";
string txt = "The character \\ is called backslash.";

    return 0;
}