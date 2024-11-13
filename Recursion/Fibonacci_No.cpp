#include<iostream>
using namespace std;

int fibonacci(int n) {

  //Base cases
  if(n==1 ) 
    return 0;

  if(n==2)
    return 1;  

  // int first = 0, second = 1, next;
  return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
  int n;
  cout << "Enter the number :- ";
  cin >> n;

  cout << "Nth fibonacci no. is :- " << fibonacci(n);
}