#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int l = 1, r = n, ans = n;
    while (l <= r)
    {
        int m = (l + r) / 2;
        int sum = 0;
        for (int i = 1; i <= m; i++)
        {
            sum += (m / i);
        }
        if (sum >= n)
        {
            r = m - 1;
            ans = min(ans, m);
        }
        else
        {
            l = m + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}