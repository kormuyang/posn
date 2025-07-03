#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    int l = 0, r = 0;
    for (int &i : a)
    {
        cin >> i;
        r = max(r, i);
    }
    int ans = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;
        int cnt = 0;
        for (int i : a)
        {
            cnt += (i / m);
        }
        if (cnt >= k)
        {
            ans = max(ans, m);
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}