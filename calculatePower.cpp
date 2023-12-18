#include <iostream>
using namespace std;

int calculatePower(int, int);

int main()
{
    int number;
    int high;

    cout << "Zahl: ";
    cin >> number;
    cout << "Potenz: ";
    cin >> high;

    int power = calculatePower(number, power);
    cout << number << "^" << high << " = " << power << endl;

return 0;
}

int calculatePower(int number, int high)
{
    for(int i = 0; i <= high; i++)
    {
        number = number*number;
    }

    return number;
}