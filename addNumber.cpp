#include <iostream>
using namespace std;

int addNumber(int, int);

int main()
{
    int firstNumber;
    int secondNumber;

    cout << "Erste Zahl: ";
    cin >> firstNumber;

    cout << "Zweite Zahl: ";
    cin >> secondNumber;

    int sum = addNumber(firstNumber, secondNumber);

    cout << "Summe: " << sum << endl;

return 0;
}

int addNumber(int firstNumber, int secondNumber)
{
    int sum = firstNumber + secondNumber;

    return sum;
}