#include <iostream>

using namespace std;

bool checkLeapYear(int);

int main()
{
    int year;

    cout << "Jahr: ";
    cin >> year;

    if (checkLeapYear(year))
    {
        cout << year << " ist ein Schaltjahr." << endl;
    }
    else
    {
        cout << year << " ist kein Schaltjahr." << endl;
    }

    return 0;
}

bool checkLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }

    return false;
}