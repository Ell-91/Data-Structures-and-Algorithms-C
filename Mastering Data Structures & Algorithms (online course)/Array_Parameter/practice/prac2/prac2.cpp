#include<iostream>

using namespace std;

// Create an array and return its pointet

int * fun(int size){
  int *p;
  p = new int[size];  //Array is created in heap but main function can access it 

  for(int i = 0; i < size; i++)
  p[i] = i + 1;
  return p;


}

int main(){
  int *ptr, size_ = 5; // create a pointer
  ptr = fun(size_); // calling a function taking it as ptr

  for(int i = 0; i < size_; i++){
    cout << ptr[i] << endl;   // using a pointer to print the array
  }
  return 0;
}