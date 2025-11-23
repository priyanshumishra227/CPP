#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    we can use min and max without including the library but for advance functions we need to have cmath library
    */

    cout << max(5, 7) << endl;
    cout << min(5, 7) << endl;

    double num = 9.0;
    cout << "Log of " << num << ": " << log(num) << endl;          // Output: 2.19722
    cout << "Square root of " << num << ": " << sqrt(num) << endl; // Output: 3
    cout << "9 raised to power 2: " << pow(num, 2) << endl;        // Output: 81
    cout << "Ceiling of 3.14: " << ceil(3.14) << endl;             // Output: 4
    cout << "Floor of 3.14: " << floor(3.14) << endl;              // Output: 3

    return 0;
}