#include <iostream>
using namespace std;

int main() {
/*
if (condition1) {
  block of code to be executed if condition1 is true
} else if (condition2) {
  block of code to be executed if the condition1 is false and condition2 is true
} else {
  block of code to be executed if the condition1 is false and condition2 is false
}
*/


int time = 14;
if(time<10){
    cout<<"Good Morning";
}else if(time<20){
    cout<<"Good Day";
}else{
    cout<<"Good Evening";
}
    return 0;
}
