#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
  int pivot = arr[s];

  int count = 0;
  for(int i=s+1; i<=e; i++) {
    if(arr[i] <= pivot) {
      count++;
    }
  }

  int pivotIndex = s+count;
  swap(arr[pivotIndex], arr[s]);

  int i=s, j=e;
  while(i < pivotIndex && j > pivotIndex) {
    while(arr[i] <= pivot) {
      i++;
    }
    while(arr[j] > pivot) {
      j--;
    }

    if(i<pivotIndex && j>pivotIndex) {
      swap(arr[i++], arr[j--]);
    }
  }
  return pivotIndex;
}

void quick_sort(int arr[], int s, int e) {
  if(s>=e) return;

  int mid = s + (e-s)/2;

  int p = partition(arr, s, e);

  quick_sort(arr, s, p-1);
  quick_sort(arr, p+1, e);
}

int main() {
  int arr[] = {5,3,6,8,2,3,1};
  int n = 7;
  quick_sort(arr, 0, n-1);
  for(int i=0; i<n; i++) {
    cout << arr[i] << " "; 
  }
}