#include <iostream>
// to use strings , we need to add a string library 
#include <string> 

using namespace std;

int main() {
    /*
        Strings enable user to write a collection of characters 
        They can also contain multiple comma sepreated or space seperated words or puncuations . 
        To get the number of characters in strings we can use length() or size() function. 
        Remember this will also count space as a character.
    */

    string myName = "CyberWithPriyanshu";
    cout <<myName<<endl;

    string blogName = "Cyber with Priyanshu";
    cout << blogName<<endl;

    cout<<myName.length()<<endl;
    cout<< blogName.length();
    return 0;
}