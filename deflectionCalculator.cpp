#include <iostream>
#include <iomanip>

using namespace std;

const float EL_Al = 1.49e9;
const float EL_wood = .187e9;
const float EL_steel = 3.9e9;
float length, weight, base, height;
const char seperator = ' ';
const int numWidth = 12;
float answers[] = {1.49e9, .187e9, 3.9e9};
String materials[] = {Aluminum, Wood, Steel};
int i = 0;

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

  for (i = 0; i < 3; i++) {
    answers[i] = ((4 * ((length * length * length) * weight)) / ((answers[i] * base) * (height * height * height)));
    cout.precision(2);
    cout << "The answer is: " << answers[i] << endl;
    cout << left << setw(numWidth) << "material";
    cout << left << setw(numWidth) << "elasticity";
    cout << left << setw(numWidth) << "length(ft)";
    cout << left << setw(numWidth) << "weight(lb)";
    cout << left << setw(numWidth) << "base(ft)";
    cout << left << setw(numWidth) << "height(ft)";
    cout << left << setw(numWidth) << "max deflection" << endl;
    cout << setw(numWidth) << materials[i];
    cout << setw(numWidth) << EL_steel;
    cout << setw(numWidth) << length;
    cout << setw(numWidth) << weight;
    cout << setw(numWidth) << base;
    cout << setw(numWidth) << height;
    cout << setw(numWidth) << answers[i] << endl;
  }
}
