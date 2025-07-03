#include <iostream>

using namespace std;

int main()
{
    string a, q, b; cin >> a >> q >> b;
    int len_a = a.length(), len_b = b.length();
    if (len_a < len_b)
    {
        swap(a, b);
        swap(len_a, len_b);
    }

    string ans = "";
    if (q == "+")
    {
        if (len_a != len_b)
        {
            cout << "1";
            for (int i = 0; i < len_a - len_b - 1; i++)
            {
                cout << "0";
            }
            cout << "1";
            for (int i = 0; i < len_b - 1; i++)
            {
                cout << "0";
            }
            cout << '\n';
        }
        else
        {
            cout << "2";
            for (int i = 0; i < len_a - 1; i++)
            {
                cout << "0";
            }
            cout << '\n';
        }
    }
    else if (q == "*")
    {
        cout << "1";
        for (int i = 0; i < len_a + len_b - 2; i++)
        {
            cout << "0";
        }
        cout << '\n';
    }
    return 0;
}