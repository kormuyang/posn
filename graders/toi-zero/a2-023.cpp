#include <bits/stdc++.h>

using namespace std;

bool isUnknown(string s) {
    for (char c : s) {
        if (c != 'I' and c != 'T') {
            return false;
        }
    }
    return true;
}

int main() {
    string s; cin >> s;
    int n = s.size();
    for (int i = 0; i < n; i++) {
        s[i] = toupper(s[i]);
    }
    if (isUnknown(s)) {
        cout << "unknown " << n << '\n';
        return 0;
    }
    int i = 0, max_a_len = 0;
    while (i < n) {
        if (s[i] == 'R') {
            i++;
            if (i == n or s[i] != 'A') {
                cout << "no " << i << '\n';
                return 0;
            }
            int a_len = 0;
            while (i < n and s[i] == 'A') {
                a_len++;
                i++;
            }
            max_a_len = max(max_a_len, a_len);
        } else if (s[i] == 'A') {
            cout << "no " << i << '\n';
            return 0;
        } else if (s[i] == 'B') {
            i++;
            if (i == n or (s[i] != 'I' and s[i] != 'T')) {
                cout << "no " << i << '\n';
                return 0;
            }
            while (i < n and (s[i] == 'I' or s[i] == 'T')) {
                i++;
            }
        } else {
            i++;
        }
    }
    cout << "yes " << max_a_len << '\n';
    return 0;
}