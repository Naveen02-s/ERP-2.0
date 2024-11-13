#include<iostream>
using namespace std;

int power(int n) {
  if(n==0) return 1;

  return 2 * power(n-1);
}

int main() {
  int n;
  cout << "Enter the number :- ";
  cin >> n;

  cout << "42 raised to the power " << n << " is :- " << power(n);
}