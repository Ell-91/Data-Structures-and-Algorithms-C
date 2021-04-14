#include<iostream>
#include<stdio.h>

using namespace std;

int add(int a, int b){
  int c;
  c = a + b;
  return(c); 

}
int main(){
  int x = 10, y = 5, z;
  z = add(x,y);
  printf("sum %d\n", z);
  cout << "sum is: " << z << endl;
  return 0;
}