#include <iostream>
using namespace std;

void swapValues(string&, string&);

int main()
{
    string x;
    string y;

    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    cout << "davor:\t" << "x: " << x << "\ty: " << y << endl;

    swapValues(x, y);

    cout << "danach:\t" << "x: " << x << "\ty: " << y << endl;


return 0;
}

void swapValues(string& x, string& y)
{
    string temp = x;
    x = y;
    y = temp;
}