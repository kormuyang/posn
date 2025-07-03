#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int &i : a)
        cin >> i;
    sort(a.begin(), a.end());
    while (q--)
    {
        int x;
        cin >> x;
        int idx = lower_bound(a.begin(), a.end(), x) - a.begin();
        if (idx == 0 || a[idx] == x)
        {
            cout << a[idx] << '\n';
        }
        else if (idx == n || x - a[idx - 1] <= a[idx] - x)
        {
            cout << a[idx - 1] << '\n';
        }
        else
        {
            cout << a[idx] << '\n';
        }
    }
    return 0;
}