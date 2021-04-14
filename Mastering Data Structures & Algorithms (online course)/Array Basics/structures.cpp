#include<iostream>
#include<stdio.h>

using namespace std;

//structure doesn't consume any memory until
//you declare a variable of the type struct

struct Rectangle{
  int length;
  int width;
  char x;
}r1;          //gloabl variable same as saying, struct Rectangle r1; 

int main(){
  struct Rectangle r2 = {10,5};  //variable created accessible to all functions 
                      //inside the program

  r2.length = 6;
  r2.width = 9;
  printf("%lu\n", sizeof(r2));  //12 bytes
  cout << r2.length << endl;
  cout << r2.width << endl;
  return 0;
}