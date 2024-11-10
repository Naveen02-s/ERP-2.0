#include<iostream>
using namespace std;

int main(){
  float radius, PI = 3.14;
  float area, circum;

  cout << "Enter the radius of the circle:- ";
  cin >> radius;

  area = PI * radius * radius;
  circum = 2 * PI * radius ;

  cout << "Area of the circle is :- " << area << endl;
  cout << "Circumference of the circle is :- " << circum << endl;
  return 0;
}