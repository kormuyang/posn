#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        // a[i].first -> value, a[i].second -> position
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());

    while (q--)
    {
        int x;
        cin >> x;
        // a = [[2, 1], [2, 5], [2, 8], [3, 4], ... , [10, 9]]
        vector<pair<int, int>>::iterator first_itr = lower_bound(a.begin(), a.end(), make_pair(x, -1)); // x = 2; [2, -1]
        if (first_itr == a.end() or (*first_itr).first != x)
        {
            cout << "-1 -1\n";
            continue;
        }
        vector<pair<int, int>>::iterator last_itr = lower_bound(a.begin(), a.end(), make_pair(x + 1, -1));
        cout << (*first_itr).second << ' ' << (*(last_itr - 1)).second << '\n';
    }
    return 0;
}