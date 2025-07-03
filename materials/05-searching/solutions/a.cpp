#include <bits/stdc++.h>

using namespace std;

// Time Complexity: O(n log n + q log n)
// Space Complexity: O(1)

int main()
{
    cin.tie(nullptr)->sync_with_stdio(false);
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
        cout << (binary_search(a.begin(), a.end(), x) ? "YES\n" : "NO\n");
    }
    return 0;
}