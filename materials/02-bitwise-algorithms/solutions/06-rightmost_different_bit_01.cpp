#include <iostream>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    if (n == m)
    {
        cout << "-1\n";
        return 0;
    }
    for (int i = 0; (1 << i) <= n or (1 << i) <= m; i++)
    {
        if (((m & (1 << i))) != (n & (1 << i)))
        {
            cout << (i + 1) << '\n';
            break;
        }
    }
    return 0;
}