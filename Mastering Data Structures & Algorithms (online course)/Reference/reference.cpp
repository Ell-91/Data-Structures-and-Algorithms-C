#include<iostream>
using namespace std;

int main(){
  int a = 10;    //created in the stack
  int &r = a;   //this is a reference 
  cout << r << endl;


  //cannot change the reference to another variable
  int b = 25;
  r = b;

  //both print 25 because they are references
  cout << r << endl;
  cout << a << endl;
  return 0;
}