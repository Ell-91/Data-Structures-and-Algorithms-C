#include<iostream>
#include<stdio.h>

using namespace  std;

int main()
{
  int A[5]; //integers take 4 bytes 
  A[0] = 12;
  A[1] = 15;
  A[2] = 25;

  int B[] = {2, 4, 6, 8, 10, 7, 13};
  int C[10] = {2, 4, 6, 8, 10, 7, 13}; //index 8 and 9 will be 0 
  int D[10] = {0}; //entire array will be initialized to 0clear
  cout << sizeof(A) << "\n"; //size of array is 20
  cout << A[1] << endl;
  cout << B[0] << endl;
  cout << sizeof(B) << "\n";  //28 bytes
  printf("%d", A[2]); //20 bytes
 

  //print all elements in an array
  for(int i = 0; i < 10; i++) {
    cout << C[i] << endl;
  }

  //another way to access elements in an array in c++ 
  /*for(int x:C) {
    cout << x << endl;
  }*/

//variable sized array, you can created it
//but you cannot assign values
  int n;
  cout << "Enter Size: ";
  cin >> n;
  int E[n]; //you can declare but not initialize, it will have all garbage values
  E[0] = 2; //or fill the array using a loop and input from the user



  return 0;
}