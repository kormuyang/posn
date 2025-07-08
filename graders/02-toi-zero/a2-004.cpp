#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    int ans = 0, prev = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[prev])
        {
            ans = max(ans, i - prev);
            prev = i;
        }
    }
    if (a[prev] == a[n - 1]) ans = max(ans, n - prev);
    cout << ans << '\n';
    return 0;
}