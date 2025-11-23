#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
    You can access the string chracters by refering to it's index value .
    Index always start from 0 .

    You can also use at(index) function where index is the index number.

    You can get the last caharacter by using length()-1.
    */
   
    string myStr = "Hello";
    cout << myStr[0] << endl;
    cout << myStr.at(1) << endl;
    return 0;
}