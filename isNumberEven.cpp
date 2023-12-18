#include <iostream>
using namespace std;

bool isNumberEven(int);

int main()
{
    int number;

    cout << "Zahl: ";
    cin >> number;

    bool isEven = isNumberEven(number);

    if(isEven)
    {
        cout << "Die Zahl " << number << " ist gerade." << endl;
    }
    else
    {
        cout << "Die Zahl " << number << " ist ungerade." << endl;
    }

return 0;
}

bool isNumberEven(int number)
{
    if(number % 2 == 0)
    {
        return true;
    }

    return false;
}