#include<iostream>
using namespace std;

void sortArray(int arr[], int n) {
  if(n <= 1) {
    return;
  }

  sortArray(arr, n-1);

  int key = arr[n-1];
  int j = n-2;

  while(j>=0 && arr[j] > key) {
    arr[j+1] = arr[j];
    j--;
  }
  arr[j+1] = key;
}

int main() {
  int arr[] = {5,3,5,6,2,8};
  sortArray(arr, 6);
  for(int i=0; i<6; i++) {
    cout << arr[i] << " "; 
  }
}