#include <iostream>
using namespace std;

bool binary_search(int arr[], int s, int e, int k) {

  //base case
  if(s > e) return false;

  int mid = s + (e-s)/2;
  if(arr[mid] == k) 
    return true; 
  
  if(arr[mid] > k) {
    return binary_search(arr, s, mid-1, k);
  }
  else {
    return binary_search(arr, mid+1, e, k);
  }
}

int main(){
  int arr[] = {2,4,6,10,14,16};
  int size = 6;
  int target = 9;
  int s = 0, e = size-1;
  if(binary_search(arr, s, e, target))
    cout << "Found";
  else 
    cout << "Not Found";
}