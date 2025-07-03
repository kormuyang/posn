#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    int s;
    cin >> s;
    int ans = INT_MIN;
    for (int i : a)
    {
        int idx = lower_bound(a.begin(), a.end(), s - i) - a.begin();
        if (a[idx] == i)
            continue;
        if (a[idx] == s - i)
        {
            cout << s << '\n';
            return 0;
        }
        else if (idx == 0)
            continue;
        if (a[idx - 1] != i)
            ans = max(ans, i + a[idx - 1]);
    }
    cout << ans << '\n';
    return 0;
}