#include <iostream>
using namespace std;

int main(){
  int intSize;
  float floatSize;
  double doubleSize;
  char charSize;

  cout << "Size of int - " << sizeof(intSize) 
    << endl <<
    "Size of float - " << sizeof(floatSize) 
    << endl <<
    "Size of double - " << sizeof(doubleSize) 
    << endl <<
    "Size of char - " << sizeof(charSize) ;
}