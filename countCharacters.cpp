#include <iostream>
using namespace std;

int countCharacters(string);

int main()
{
    string word;

    cout << "Wort: ";
    cin >> word;

    int charCount = countCharacters(word);
    cout << "Dein Wort besteht aus " << charCount << " Zeichen." << endl;


    return 0;
}

int countCharacters(string word)
{
    return word.length();
}