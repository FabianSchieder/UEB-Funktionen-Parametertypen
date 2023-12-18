#include <iostream>
#include <ctime>
using namespace std;

int generateRandomNumber(int, int);



int main()
{


    int begin;
    int end;

    cout << "Von: ";
    cin >> begin;
    cout << "Bis: ";
    cin >> end;

    int randomNumber = generateRandomNumber(begin, end);
    cout << "Zufaellige Zahl: " << randomNumber << endl;

return 0;
}

int generateRandomNumber(int begin, int end)
{
    srand(time(NULL));

    return rand() % (end - begin + 1) + begin;
}

template<typename test, typename 1>

