#include <iostream>

using namespace std;

string convertToUppercase(string);

int main()
{
    string word;

    cout << "Wort: ";
    cin >> word;

    string uppercaseStr = convertToUppercase(word);
    cout << uppercaseStr << endl;

    return 0;
}

string convertToUppercase(string word)
{
    for (int i = 0; i < word.length(); i++)
    {
        if (word.at(i) >= 'a' && word.at(i) <= 'z')
        {
            word.at(i) = word.at(i) - 32;
        }
    }

    return word;
}

