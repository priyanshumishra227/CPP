#include <iostream>
#include<string>

using namespace std;

int main() {
/*
We use cin to take user input . But there is a issue when we give space in cin compiler treates it as end of input so giving space seperated string is not possible in cin . That is why we use getline(cin, stringname) to read full line. 

*/

string fullName ;
cout << "Enter the full name ";
getline(cin,fullName);

cout<<"Full name is "<<fullName ;
    return 0;
}