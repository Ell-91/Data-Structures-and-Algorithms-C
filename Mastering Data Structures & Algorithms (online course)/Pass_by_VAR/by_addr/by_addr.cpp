#include<iostream>

using namespace std;

void swap(int *x, int *y){  //taking in pointers 
  int temp;
  temp = *x;  //dereference 
  *x = *y;
  *y = temp;
}

int main() {
  int a = 10, b = 20;
  swap(&a, &b);
  cout << a << "\n" << b << endl;
  return 0;

}