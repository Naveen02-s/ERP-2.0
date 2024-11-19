#include<iostream>
#include<vector>
using namespace std;

void merge(int arr[], int s, int mid, int e) {

  int i = s;
  int j = mid+1;

  vector<int> temp;
  while(i<=mid && j<=e) {
    if(arr[i] <= arr[j]) {
      temp.push_back(arr[i]);
      i++;
    }
    else {
      temp.push_back(arr[j]);
      j++;
    }
  }

  while(i<=mid) {
    temp.push_back(arr[i]);
    i++;
  }
  while(j<=e) {
    temp.push_back(arr[j]);
    j++;
  }

  for(int i=s; i<=e; i++) {
    arr[i] = temp[i-s];
  }
}

void merge_sort(int arr[], int s, int e) {
  if(s>=e) return;

  int mid = s + (e-s)/2;

  merge_sort(arr, s, mid);

  merge_sort(arr, mid+1, e);

  merge(arr, s, mid, e);
}

int main() {
  int arr[] = {5,3,6,8,2,3,1};
  int n = 7;
  merge_sort(arr, 0, n-1);
  for(int i=0; i<n; i++) {
    cout << arr[i] << " "; 
  }
}