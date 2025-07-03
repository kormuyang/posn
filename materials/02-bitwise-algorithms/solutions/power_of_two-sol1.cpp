#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    bool check = false;

    for (int i = 0; (1 << i) < n; i++)
    {
        if (n & (1 << i))
        {
            check = true;
            break;
        }
    }
    if (check)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
    return 0;
}