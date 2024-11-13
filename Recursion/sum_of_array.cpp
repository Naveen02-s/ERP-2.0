#include<iostream>
using namespace std;

int sumOfEle(int *arr, int n) {
  if(n == 0) return 0;
  if(n == 1) return arr[0];

  int sum = arr[0];
  return sum + sumOfEle(arr+1, n-1);
}

int main() {
  int arr[] = {3,5,3,1,5};

  cout << sumOfEle(arr, 5);
}