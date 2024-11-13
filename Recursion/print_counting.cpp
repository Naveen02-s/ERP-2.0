#include<iostream>
using namespace std;

void printCounting(int n) {
  //base condition
  if(n<=0) return;

  //recurence relation
  printCounting(n-1);

  //processing
  cout << n << endl;
}

int main() {
  int n;
  cout << "Enter the number :- ";
  cin >> n;

  printCounting(n);
}