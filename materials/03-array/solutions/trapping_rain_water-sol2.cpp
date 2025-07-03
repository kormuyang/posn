#include <iostream>

using namespace std;

// 5
// 3 0 2 0 4
// output: 7

int main() {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];
    int ans = 0;

    vector<int> l_max(n, 0), r_max(n, 0);
    // l_max[i] = maximum value from 0 -> i
    // r_max[i] = maximum value from n - 1 -> i

    l_max[0] = a[0];
    r_max[n - 1] = a[n - 1];
    for (int i = 1; i < n; i++) {
        l_max[i] = max(l_max[i - 1], a[i]);
    }
    for (int i = n - 2; i >= 0; i--) {
        r_max[i] = max(r_max[i + 1], a[i]);
    }
    for (int i = 1; i < n - 1; i++) {
        if (min(l_max[i], r_max[i]) > a[i]) {
            ans += min(l_max[i], r_max[i]) - a[i];
        }
    }

    cout << ans << '\n';
    return 0;
}