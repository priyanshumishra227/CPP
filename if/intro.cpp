#include <iostream>
using namespace std;

int main() {
    /*
      Demonstration of basic use of the 'if' statement in C++.

      An 'if' statement evaluates a condition. If the condition evaluates
      to true (non-zero), the block inside the braces executes.
      If it evaluates to false (zero), the block is skipped.
    */

    int x = 18;
    int y = 20;

    // This condition compares x and y using the < operator.
    // Since 18 < 20 is true, the message will be printed.
    if (x < y) {
        cout << "x is less than y" << endl;   
    }
    int a;
    // This statement assigns 1 to variable 'a'.
    // In C++, an assignment inside an 'if' condition evaluates to the assigned value.
    // Since 1 is considered true, this block will always execute.
    if (a = 1) {
        cout << "If works when condition is set to 1 i.e. true" << endl;
    }

    int b;
    // This assigns 0 to 'b'. The value 0 is considered false.
    // Therefore, this block will never execute.
    if (b = 0) {
        cout << "This will not give any output" << endl;
    }

    return 0;
}
