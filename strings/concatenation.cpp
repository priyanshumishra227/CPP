#include <iostream>
#include <string>

using namespace std;

int main()
{

    /*
     we use + operator to use add 2 or more strings together .
     this process of adding strings togther is known as string concatenation.

     we can also use append function
     this is add the strings
     for giving space include the space in the quotes see below
     must remember you can not add number with string it will give error .
    */

    string firstName = "Git";
    string lastName = "hub";

    cout << firstName + lastName << endl;

    cout << firstName + " " + lastName << endl;

    cout << firstName.append(lastName) << endl;

    return 0;
}
