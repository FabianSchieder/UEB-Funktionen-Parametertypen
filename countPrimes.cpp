#include <iostream>

using namespace std;

int countPrimes(int);

int main()
{
    int number;
    cout << "Geben Sie eine Zahl ein: ";
    cin >> number;

    int primeCount = countPrimes(number);
    cout << "Anzahl der Primzahlen bis " << number << " beträgt: " << primeCount << std::endl;

return 0;
}

int countPrimes(int n)
{
    if (n <= 2)
    {
        return 0;
    }

    bool isPrime[n];
    int count = 0;

    for (int i = 2; i < n; ++i)
    {
        isPrime[i] = true;
    }

    for (int p = 2; p * p < n; ++p)
    {
        if (isPrime[p]) {
            for (int i = p * p; i < n; i += p)
            {
                isPrime[i] = false;
            }
        }
    }

    for (int i = 2; i < n; ++i)
    {
        if (isPrime[i]) {
            count++;
        }
    }

    return count;
}