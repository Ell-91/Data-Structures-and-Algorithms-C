#include<iostream>

using namespace std;

// Inline function 

void swap(int &x, int *y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}

// This could also work 

/*
void swap(int &x, int *y){
  int temp;
  temp = x;
  x = *y;
  *y = temp;
}
*/

int main() {
  int a = 10, b = 20;

  swap(a,b);
  cout << a << "\n" << b << endl;

  return 0;
}