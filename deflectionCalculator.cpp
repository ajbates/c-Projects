#include <iostream>
// #include <iomanip.h>

using namespace std;

float EL_Al = 1.49e9;
float EL_wood = .187e9;
float EL_steel = 3.9e9;
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
    cout << setprecision(2) << answer;
    cout << "The answer is: " << answer << endl;
    cout << left << setw(numWidth) << "Elasticity";
    cout << left << setw(numWidth) << "Length";
    cout << left << setw(numWidth) << "Weight";
    cout << left << setw(numWidth) << "Base";
    cout << left << setw(numWidth) << "Height";
    cout << left << setw(numWidth) << "Answer" << endl;
    cout << setw(12) << EL_steel
        << setw(12) << length
        << setw(12) << weight
        << setw(12) << base
        << setw(12) << height
        << setw(12) << answer
        << endl;
    return 0;
}

template<float Measurement> void printElement(Measurement t, const int& width)
{
    cout << left << setw(width) << setfill(separator) << t;
}
