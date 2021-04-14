#include <iostream>

using namespace std;

 /* 
    Value of num1 and num2 is copied into a and b
    Any changes yo fomal parameters doesnt affect actual parameter\
    Call by value is used when you want to process something and return
       the result  
*/

int add( int a, int b){
  int c;
  c = a + b;
  return c;
}

int main() {
  int num1 = 1, num2 = 15, sum;

  sum = add(num1, num2);

  cout << "Sum is: " << sum << endl;
  return 0;

}