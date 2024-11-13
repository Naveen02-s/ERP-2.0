#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr) {
  int count = 0;
  int n = arr.size();

  for(int i=1; i<n; i++) {
    if(arr[i-1] > arr[i]) count++;
  }
  if(arr[n-1] > arr[0]) count++;

  return count<=1;
}

int main() {
  vector<int> arr = {1,5,3,4,5,6,7,8};
  if(isSorted(arr)) 
    cout << "Yes" ;
  else 
    cout << "No" ;
}