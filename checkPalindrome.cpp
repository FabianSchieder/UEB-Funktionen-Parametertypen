#include <iostream>
using namespace std;

bool checkPalindrome(string);

int main()
{
    string word;

    cout << "Wort: ";
    cin >> word;

    bool isPalindrome = checkPalindrome(word);

    if(isPalindrome)
    {
        cout << word << " ist ein Palindrom." << endl;
    }
    else
    {
        cout << word << " ist kein Palindrom." << endl;
    }

return 0;
}

bool checkPalindrome(string word)
{
    for (int i = 0; i < word.length() / 2; i++)
    {
        if (word.at(i) != word.at(word.length() - 1 - i))
        {
            return false;
        }
    }
    return true;
}
