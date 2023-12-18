#include <iostream>

using namespace std;

int calculateFactorial(int);

int main()
{
    int zahl;

    cout << "Gib eine Zahl ein: ";
    cin >> zahl;

    if (zahl < 0)
    {
        cout << "Negative Zahlen haben keine Fakultaet." << std::endl;
    }
    else
    {
        int ergebnis = calculateFactorial(zahl);
        cout << "Die Fakultaet von " << zahl << " ist: " << ergebnis << std::endl;
    }

    return 0;
}

int calculateFactorial(int n)
{
    int fakultaet = 1;

    for (int i = 1; i <= n; ++i)
    {
        fakultaet *= i;
    }

    return fakultaet;
}