#include <bits/stdc++.h>

// Brute-force

using namespace std;

string convert_decimal_to_binary(int x) {
    string ans = "";
    while (x) {
        ans = ((x & 1) ? "1" : "0") + ans;
        x >>= 1;
    }
    return ans;
}

int convert_binary_to_decimal(string x) {
    int ans = 0;
    for (char bit : x) {
        ans <<= 1;
        ans += ((bit == '1') ? 1 : 0);
    }
    return ans;
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    int ans = 0;
    do {
        string tmp = "";
        for (int i : a) tmp += convert_decimal_to_binary(i);
        ans = max(ans, convert_binary_to_decimal(tmp));
    } while (next_permutation(a.begin(), a.end()));
    cout << ans << '\n';
    return 0;
}