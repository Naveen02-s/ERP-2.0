#include <iostream>
using namespace std;

int fact(int n){
  //base condtion
  if(n==0) return 1;

  return n*fact(n-1);
}

int main(){
  int n;
  cout << "Enter the number :- ";
  cin >> n;

  cout << "Factorial of " << n << " is :- " << fact(n);
}