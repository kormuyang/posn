#include <iostream>

using namespace std;

// a -> yes
// z -> no

int main()
{
    char c; cin >> c;
    string vowel = "aeiou";

    for (int i = 0; i < 5; i++)
    {
        if (c == vowel[i])
        {
            cout << "yes\n";
            return 0;
        }
    }

    cout << "no\n";
    return 0;
}