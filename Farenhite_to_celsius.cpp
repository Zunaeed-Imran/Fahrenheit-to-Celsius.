#include <iostream>

using namespace std;

int main () {
  int F, C;

  cout << "Enter the Fahrenhite of to Celsius: ";
  cin >> F;

  C = (F - 30) / 2;

  cout << "The Result of Celsius is: " << C << endl;

  return 0;
}