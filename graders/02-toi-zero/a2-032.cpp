#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k; cin >> n >> m >> k;
    vector<vector<int>> hasPokemon(n + 2, vector<int>(m + 2, 0));
    for (int i = 0; i < k; i++) {
        int x, y; cin >> y >> x;
        hasPokemon[y + 1][x + 1]++;
    }

    int ans = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            int cnt = 0;
            for (int ii = i - 1; ii <= i + 1; ii++) {
                for (int jj = j - 1; jj <= j + 1; jj++) {
                    if (ii == i and jj == j) {
                        continue;
                    }
                    cnt += hasPokemon[ii][jj];
                }
            }
            ans = max(ans, cnt);
        }
    }

    cout << ans << '\n';
    return 0;
}