#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; (1 << i) <= n; i++)
    {
        if (n & (1 << i))
        {
            cnt++;
        }
    }
    cout << cnt << '\n';
    return 0;
}