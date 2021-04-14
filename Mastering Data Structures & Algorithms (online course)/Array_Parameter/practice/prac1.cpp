#include<iostream>

using namespace std;

// Arrays are always pass by address

void func(int A[], int n){
    for(int i = 0; i < n; i++){
    cout << A[i] << " ";
  }
    A[0] = 15;
    cout << A[0] << endl;
}

int main(){
  int A[] = {2, 4, 6, 8, 10};
  int n = 5;
  func(A, 5);

/*      Or this as a for loop in C++ 11
    for(int x:A){
    cout << x << endl;
  }
*/
  return 0;
}