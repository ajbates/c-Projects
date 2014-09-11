#include <iostream>

using namespace std;

int main()
const double EL_AL = 1.49e9;
const double EL_wood = .187e9;
const double EL_steel = 3.9e9;
{
    cout << "Enter the Length: ";
    cin >> length;
    cout << "Weight";
    cin >> weight
    cout << "Base: ";
    cin >> base;
    cout << "Height: ";
    cin >> height;

    double answer = (length * weight) / (base * height);
    cout << "The answer is " << answer << endl;
    cout << fixed << setprecision(2)
        << setw(12) << "Elasticity"
        << setw(12) << "Length"
        << setw(12) << "Weight"
        << setw(12) << "Base"
        << setw(12) << "Height"
        << setw(12) << "Answer"
        << endl;
    cout << setw(12) << EL_steel
        << setw(12) << length
        << setw(12) << weight
        << setw(12) << base
        << setw(12) << height
        << setw(12) << answer
        << endl;
    return 0;
}
