#include<iostream>
using namespace std;

bool linearSearch(int *arr, int n, int target) {

  if(n == 0) return false;

  if(arr[0] == target) 
    return true;
  else
    return linearSearch(arr+1, n-1, target);
}

int main() {
  int arr[] = {1,2,3,4,5,6,7,8};
  int size = 8;
  int target = 10;
  if(linearSearch(arr, size, target)) {
    cout << "Found";
  }
  else cout << "Not found";
}