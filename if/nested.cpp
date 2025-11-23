#include <iostream>
using namespace std;

int main() {
/*
if (condition1) {
  // code to run if condition1 is true
  if (condition2) {
    // code to run if both condition1 and condition2 are true
  }
}
*/

int x = 15;
int y = 25;

if (x > 10) {
  cout << "x is greater than 10\n";

  // Nested if
  if (y > 20) {
    cout << "y is also greater than 20\n";
  }
}
    return 0;
}