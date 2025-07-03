#include <iostream>

using namespace std;

// 7
// 2 3 10 6 4 8 1
// output: 8

int main()
{
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];

    int ans = 0, max_right = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] > max_right)
        {
            max_right = a[i];
        }
        else
        {
            ans = max(ans, max_right - a[i]);
        }
    }

    cout << ans << '\n';
    return 0;
}