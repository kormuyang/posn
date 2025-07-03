#include <iostream>

using namespace std;

// 41 + -> 41 + 14 = 55

int main()
{
    string a, q; cin >> a >> q;

    string s = a;
    for (int i = 0; i < s.length() / 2; i++)
    {
        swap(s[i], s[s.length() - i - 1]);
    }

    if (q == "+")
    {
        cout << a << " + " << stoi(s) << " = " << stoi(a) + stoi(s) << '\n';
    }
    else
    {
        cout << a << " * " << stoi(s) << " = " << stoi(a) * stoi(s) << '\n';
    }

    return 0;
}