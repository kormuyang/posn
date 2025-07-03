#include <iostream>

using namespace std;

int main()
{
    int m, n; cin >> m >> n;
    int cnt = 0;
    for (int i = 1; i <= m; i++)
    {
        int j, tmp = 0;
        for (j = 1; j * j < i; j++)
        {
            if (i % j == 0)
            {
                tmp += 2;
            }
        }
        if (j * j == i)
        {
            tmp++;
        }
        if (tmp == n)
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}