#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int xors = 0;
    for (int i = 0; i < n; i++)
    {
        xors ^= a[i];
    }

    int ans1 = 0, ans2 = 0;
    int comp = xors & -xors;

    for (int i = 0; i < n; i++)
    {
        if (a[i] & comp)
        {
            ans1 ^= a[i];
        }
        else
        {
            ans2 ^= a[i];
        }
    }

    cout << ans1 << ' ' << ans2 << '\n';
    return 0;
}