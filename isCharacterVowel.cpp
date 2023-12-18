#include <iostream>

using namespace std;

bool isCharacterVowel(char);

int main()
{
    char character;

    cout << "Character: ";
    cin >> character;

    bool isVowel = isCharacterVowel(character);

    if(isVowel)
    {
        cout << character << " ist ein Vocal." << endl;
    }
    else
    {
        cout << character << " ist kein Vocal." << endl;
    }

return 0;
}

bool isCharacterVowel(char character)
{
    if(character == 'a' || character == 'r' ||character == 'i' ||character == 'o' ||character == 'u')
    {
        return true;
    }

    return false;
}