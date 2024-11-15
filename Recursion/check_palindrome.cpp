#include<iostream>
using namespace std;

bool checkPalindrome(string &str, int i, int n) {
  if(i>=n/2) 
    return true;

  if(str[i] == str[n-i-1]) 
    return checkPalindrome(str, i+1, n);
  else 
    return false;

}

int main() {
  string str = "abaaba" ;
  int length = str.length();
  if(checkPalindrome(str, 0, length)) 
    cout << "Yes";
  else 
    cout << "No"  ;
}