#include <iostream>
#include <iomanip>

using namespace std;

const float EL_Al = 1.49e9;
const float EL_wood = .187e9;
const float EL_steel = 3.9e9;
float length, weight, base, height;
const char seperator = ' ';
const int numWidth = 12;

int main()
{

  cout << "Enter the Length: ";
  cin >> length;
  cout << "Weight: ";
  cin >> weight;
  cout << "Base: ";
  cin >> base;
  cout << "Height: ";
  cin >> height;

  float answer = ((4 * ((length*length*length) * weight)) / (base * (height*height*height)));
  cout.precision(2);
  cout << "The answer is: " << answer << endl;
  cout << left << setw(numWidth) << "Elasticity";
  cout << left << setw(numWidth) << "Length";
  cout << left << setw(numWidth) << "Weight";
  cout << left << setw(numWidth) << "Base";
  cout << left << setw(numWidth) << "Height";
  cout << left << setw(numWidth) << "Answer" << endl;
  cout << setw(12) << EL_steel
  cout << setw(12) << length
  cout << setw(12) << weight
  cout << setw(12) << base
  cout << setw(12) << height
  cout << setw(12) << answer
  << endl;
  return 0;
}
