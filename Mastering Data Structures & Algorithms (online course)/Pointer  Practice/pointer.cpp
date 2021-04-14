#include<iostream>
#include<stdio.h>
#include<stdlib.h>  //to include malloc 
using namespace std;

struct Rectangle{
  int legth;
  int width;
};

int main(){
  int a = 10;
  int *p;   //declaration of pointer (for declaration use a star)
  p = &a;   //storing the address of "a" in variable p (for pointer initialization and pointer arithmetic dont use a star)
  cout << a << endl;

  printf("Using pointer %d %p", *p, &a);  //for dereferencing use a star 



  //pointer to an array 
  int A[5] = {2, 4, 6, 8, 10};  //array is created in the stack 
  int *q;

  //Option 1
  q = A; //no & when you give array name to a pointer 
        //b/c the name of an array itself (A) is the starting address of an array
  
  //Option 2
  q = &A[0]; //you could write this instead

  //print all the elements using a pointer
  for(int i = 0; i < 5; i++){
    cout << A[i] << endl;
  }
  //print all the elements using an array
    for(int i = 0; i < 5; i++){
    cout << q[i] << endl;
  }

  //create an array in heap  (C way of doing it)
  int *r;
  r = (int*)malloc(5*sizeof(int));

  r[0] = 10; r[1] = 15; r[2] = 14; r[3] = 21; r[4] = 31; 
  for(int i = 0; i < 5; i++){
    cout << r[i] << endl;
  }
  //delete dynamically allocated memory
  free(r);


  //create an array in heap  (C++ way of doing it)
  int *s;
  s = new int[5]; //dynamically allocated memory in heap
  s[0] = 18; s[1] = 19; s[2] = 20; s[3] = 21; s[4] = 22; 
  for(int i = 0; i < 5; i++){
    cout << s[i] << endl;
  }
  //delete dynamically allocated memory
  delete[]s;




  //Last example
  int *p1;
  char *p2;
  float *p3;
  double *p4;
  struct Rectangle *p5;

  //all pointers are taking 8 bytes (every pointer size is 8 bytes)
  //size of a pointer is independent of it's data type
  cout << sizeof(p1) << endl;
  cout << sizeof(p2) << endl;
  cout << sizeof(p3) << endl;
  cout << sizeof(p4) << endl;
  cout << sizeof(p5) << endl;
  return 0;
}
