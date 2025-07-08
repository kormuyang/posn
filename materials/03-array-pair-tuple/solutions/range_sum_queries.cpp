#include <iostream>

using namespace std;

// 5 3
// 4 5 3 2 5
// 0 3 -> output: 14
// 2 4 -> output: 10
// 1 3 -> output: 10

int main()
{
    int n, q; cin >> n >> q;
    vector<int> qsum(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> qsum[i];
        qsum[i] += qsum[i - 1];
    }

    while (q--)
    {
        int l, r; cin >> l >> r;
        cout << qsum[r + 1] - qsum[l] << '\n';
    }
    return 0;
}