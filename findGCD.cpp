#include <iostream>

using namespace std;

int findGCD(int, int);

int main()
{
    int numberOne;
    int numberTwo;

    cout << "Zahl 1: ";
    cin >> numberOne;
    cout << "Zahl 2: ";
    cin >> numberTwo;

    int gcdResult = findGCD(numberOne, numberTwo);
    cout << "Das GGT von: " << numberOne << " & " << numberTwo << " ist: " << gcdResult << endl;

    return 0;
}

int findGCD(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}