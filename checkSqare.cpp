#include <iostream>

using namespace std;

bool checkSqare(int);

int main()
{
    int number;

    cout << "Zahl: ";
    cin >> number;

    if (checkSqare(number))
    {
        cout << number << " ist eine Quadratzahl!" << endl;
    } else
    {
        cout << number << " ist keine Quadratzahl!" << endl;
    }

    return 0;
}

bool checkSqare(int number)
{
    for (int i = 0; i <= number; i++)
    {
        if (i * i == number)
        {
            return true;
        }
        else if (i * i > number)
        {
            return false;
        }
    }
}