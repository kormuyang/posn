#include <bits/stdc++.h>

using namespace std;

#define int long long

int f(int x)
{
    return 42 * x * x * x + 13 * x * x + 1337 * x;
}

int32_t main()
{
    int c;
    cin >> c;
    int l = 0, r = 200000;
    while (l <= r)
    {
        int x = (l + r) / 2;
        int f_x = f(x);
        if (f_x == c)
        {
            cout << x << '\n';
            break;
        }
        else if (f_x < c)
        {
            l = x + 1;
        }
        else
        {
            r = x - 1;
        }
    }
    return 0;
}