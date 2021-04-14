#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Rectangle{
  int length;
  int width;
};

int main(){
  //in C++ you don't have to have struct in C you do
  struct Rectangle r = {10,5}; 
  
  //Not using a pointer, use dot operator
  cout << r.length << endl;
  cout << r.width << endl;

  //Using a pointer, use arrow 
  struct Rectangle *p = &r;
  cout << p->length << endl;
  cout << p->width << endl;


  //Create an object of Rectangle in HEAP using C
  struct Rectangle *s;
  s = (struct Rectangle*)malloc(sizeof(struct Rectangle)); //size of sturcture takes 8 bytes of memory so malloc takes 8 bytes

  s->length = 15;
  s-> width = 7;

  cout << s->length << endl;
  cout << s->width << endl;

  return 0;
}