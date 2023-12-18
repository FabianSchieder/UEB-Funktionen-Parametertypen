#include <iostream>
using namespace std;

float multiplayFloats(float, float);

int main()
{
    float numberOne;
    float numberTwo;

    cout << "Erste Zahl: ";
    cin >> numberOne;

    cout << "Zweite Zahl: ";
    cin >> numberTwo;

    float result = multiplayFloats(numberOne, numberTwo);
    cout << "Ergebnis: " << result << endl;

return 0;
}

float multiplayFloats(float numberOne, float numberTwo)
{
    float result = numberOne * numberTwo;

    return result;
}