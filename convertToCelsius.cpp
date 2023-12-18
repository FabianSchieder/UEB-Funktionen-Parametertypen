#include <iostream>
using namespace std;

float convertToFahrenheit(float);

int main()
{
    float celsius;

    cout << "Temperatur [°C]: ";
    cin >> celsius;

    float fahrenheit = convertToFahrenheit(celsius);
    cout << "Fahrenheit: " << fahrenheit << endl;

return 0;
}

float convertToFahrenheit(float celsius)
{
    return (celsius * 9/5) + 32;
}