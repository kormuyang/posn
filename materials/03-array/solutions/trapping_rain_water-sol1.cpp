#include <iostream>

using namespace std;

// 5
// 3 0 2 0 4
// output: 7

int main() {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;

    for (int i = 1; i < n - 1; i++)
    {
        int l_max = 0, r_max = 0;
        for (int l = i - 1; l >= 0; l--)
        {
            l_max = max(l_max, a[l]);
        }
        for (int r = i + 1; r < n; r++)
        {
            r_max = max(r_max, a[r]);
        }
        if (min(l_max, r_max) > a[i])
        {
            ans += min(l_max, r_max) - a[i];
        }
    }

    cout << ans << '\n';
    return 0;
}