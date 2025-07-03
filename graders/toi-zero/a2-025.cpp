#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, rabbitX, rabbitY, k;
    cin >> n >> m >> rabbitY >> rabbitX >> k;
    vector<vector<int>> infected(n, vector<int>(m, 0));
    while (k--) {
        int x, y;
        cin >> y >> x;
        infected[y][x] = 100;
        for (int i = y - 1; i <= y + 1; i++) {
            for (int j = x - 1; j <= x + 1; j++) {
                if (i < 0 or i >= n or j < 0 or j >= m) continue;
                infected[i][j] = max(infected[i][j], 60);
            }
        }
        for (int i = y - 2; i <= y + 2; i++) {
            for (int j = x - 2; j <= x + 2; j++) {
                if (i < 0 or i >= n or j < 0 or j >= m) continue;
                infected[i][j] = max(infected[i][j], 20);
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (infected[i][j] == 0) cnt++;
        }
    }

    cout << cnt << '\n' << infected[rabbitY][rabbitX] << "%\n";
    return 0;
}