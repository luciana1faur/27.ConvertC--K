#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double gradeC;
  float gradeK;

  cout << "Convert temperature in Celsius to Kelvin :" << endl;
  cout << "-----------------------------------------" << endl;
  
  cout << "Introduce gradele Celsius: ";
  cin >> gradeC;

  gradeK = gradeC + 273.15;

  cout << "Gradele K sunt: " << gradeK << endl;

  return 0;
}
//K = ° C + 273.15