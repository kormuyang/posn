#include <bits/stdc++.h>

using namespace std;

const string LOVE = "LOVE";

int main() {
    string a, b; cin >> a >> b;
    if (a.size() > b.size()) {
        swap(a, b);
    }
    int n = a.size(), m = b.size();
    for (int i = 0; i < m - n; i++) {
        a += a[i];
    }

    string ans = "";
    for (int i = 0; i < m; i++) {
        bool found = false;
        for (int j = 0; j < LOVE.size(); j++) {
            if (a[i] == LOVE[j] or b[i] == LOVE[j] or a[i] == tolower(LOVE[j]) or b[i] == tolower(LOVE[j])) {
                found = true;
                break;
            }
        }
        if (found) {
            ans += 'w';
        } else {
            ans += '$';
        }
    }

    int max_w_len = 0, cnt_w = 0;
    int i = 0;
    while (i < m) {
        if (ans[i] == 'w') {
            int w_len = 0;
            while (i < m and ans[i] == 'w') {
                w_len++;
                i++;
            }
            max_w_len = max(max_w_len, w_len);
            cnt_w += w_len;
        } else {
            i++;
        }
    }

    if (cnt_w % 2) {
        cout << ans << max_w_len << '\n';
    } else if (max_w_len < 2) {
        cout << ans << "#\n";
    } else {
        cout << ans << '\n';
    }
    return 0;
}