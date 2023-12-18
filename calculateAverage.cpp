#include <iostream>
using namespace std;

float calculateAverage(int, int, int, int, int);

int main()
{
    int grades[5];

    cout << "Note 1: ";
    cin >> grades[0];
    cout << "Note 2: ";
    cin >> grades[1];
    cout << "Note 3: ";
    cin >> grades[2];
    cout << "Note 4: ";
    cin >> grades[3];
    cout << "Note 5: ";
    cin >> grades[4];

    float average = calculateAverage(grades[0], grades[1], grades[2], grades[3], grades[4]);
    cout << "Durchschnitt: " << average;

    return 0;
}

float calculateAverage(int first, int second, int third, int fourth, int fifth)
{
    return(((float)first + (float)second + (float)third + (float)fourth + (float)fifth) / 5);
}