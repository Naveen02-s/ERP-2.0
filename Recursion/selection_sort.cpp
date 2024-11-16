#include<iostream>
using namespace std;

void sortArray(int arr[], int n) {
  if(n == 0 || n == 1) {
    return;
  }

  for(int i=1; i<n; i++) {
    if(arr[0] > arr[i]) {
      swap(arr[0], arr[i]);
    }
  }
  sortArray(arr+1, n-1);
}

int main() {
  int arr[] = {5,3,5,6,2,8};
  sortArray(arr, 6);
  for(int i=0; i<6; i++) {
    cout << arr[i] << " "; 
  }
}