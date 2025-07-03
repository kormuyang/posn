#include <bits/stdc++.h>

using namespace std;

#define int long long

int n, m, ans = LLONG_MAX;
string s;

int calculate(vector<int> pos)
{
    int res = 1;
    vector<int> num;
    int idx = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum *= 10;
        sum += (s[i] - '0');
        if (i == pos[idx])
        {
            num.push_back(sum);
            sum = 0;
            idx++;
        }
    }
    if (sum > 0)
    {
        num.push_back(sum);
    }
    for (int i : num)
    {
        res *= i;
    }
    return res;
}

void find_min_product(vector<int> pos, int cnt, int current_index)
{
    if (cnt == m)
    {
        ans = min(ans, calculate(pos));
        return;
    }
    if (current_index == n - 1)
    {
        return;
    }
    find_min_product(pos, cnt, current_index + 1);
    pos.push_back(current_index);
    find_min_product(pos, cnt + 1, current_index + 1);
    return;
}

int32_t main()
{
    cin >> n >> m;
    cin >> s;
    find_min_product({}, 0, 0);
    cout << ans << '\n';
    return 0;
}