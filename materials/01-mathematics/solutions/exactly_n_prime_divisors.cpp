#include <iostream>

using namespace std;

int main()
{
    int m, n; cin >> m >> n;

    int cnt[m + 1];
    for (int i = 0; i <= m; i++)
    {
        cnt[i] = 0;
    }

    int ans = 0;
    for (int i = 2; i <= m; i++)
    {
        if (cnt[i] == 0)
        {
            for (int j = i; j <= m; j += i)
            {
                cnt[j]++;
            }
        }
        if (cnt[i] == n)
        {
            ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}