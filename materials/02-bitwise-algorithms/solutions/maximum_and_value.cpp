#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    for (int i = 31; i >= 0; i--)
    {
        int cnt = 0, pat = ans | (1 << i);
        for (int j = 0; j < n; j++)
        {
            if ((pat & a[j]) == pat)
            {
                cnt++;
            }
        }
        if (cnt > 1)
        {
            ans = ans | (1 << i);
        }
    }

    cout << ans << '\n';
    return 0;
}