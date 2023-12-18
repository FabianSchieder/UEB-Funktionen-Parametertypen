#include <iostream>
using namespace std;

int findMax(int, int, int);

int main()
{
    int first;
    int second;
    int third;

    cout << "Erste Zahl: ";
    cin >> first;
    cout << "Zweite Zahl: ";
    cin >> second;
    cout << "Dritte Zahl: ";
    cin >> third;

    int maxNum = findMax(first, second, third);
    cout << "Maximum: " << maxNum << endl;

return 0;
}

int findMax(int first, int second, int third)
{
    if(first > second)
    {
        if(first > third)
        {
            return first;
        }
    }
    else if(second > third)
    {
        return second;
    }

    return third;
}