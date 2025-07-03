#include <bits/stdc++.h>

// Greedy Algorithm

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

bool comp(int a, int b) {
    int len_a = __builtin_popcount(a), len_b = __builtin_popcount(b);
    if (len_a == len_b) {
        return a < b;
    } else {
        return len_a > len_b;
    }
}

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end(), comp);
    string tmp = "";
    for (int i : a) tmp += convert_decimal_to_binary(i);
    cout << convert_binary_to_decimal(tmp) << '\n';
    return 0;
}