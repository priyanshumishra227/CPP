/*
    They return boolean values 

    &&  Logical and (true if both are true) 

    || Logical or (true if any one is true)

    ! Logical not ( returns true if statement is false and vice-versa)


*/

#include <iostream>
using namespace std;

int main() {
    int x = 6 ;
    int y = 8;
    
    cout << (x>5 && y<7)<<endl;  // This will return 0 because 5 is less than 6(x) but 8(y) is not less than 7 
    cout << (x>5 || y<7)<<endl;  // This will return 1 because 1 statement is true so no need to check the other 
    cout << !(x>5 && y<7)<<endl; // This will return 1 becuase overall statement is false but it has to return the complement so complement of 0 is 1 


    return 0;
}