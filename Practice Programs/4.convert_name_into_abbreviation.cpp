#include<iostream>
#include<string>
using namespace std;

int main(){
  string fname, mname, lname;
  cout << "Enter full name (first middle last) :- ";
  cin >> fname >> mname >> lname;
  cout << "Abbreviated name :- " << fname[0] << mname[0] << lname[0];
}