#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std; 

struct Rectangle {
  int length;
  int width;
};

void fun(struct Rectangle r1){
  r1.length = 20;
  r1.width = 45;
  cout << "Length " << r1.length << endl << "Width " << r1.width << endl;
}

int main(){
  struct Rectangle r = {10, 11};
  fun(r);
  printf("Length %d \nWidth %d\n", r.length, r.width);
  return 0;
}