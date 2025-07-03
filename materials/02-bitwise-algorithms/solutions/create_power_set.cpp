#include <iostream>

using namespace std;

int main()
{
    string t; cin >> t;
    int n = t.length();

    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << t[j];
            }
        }
        cout << '\n';
    }
    return 0;
}