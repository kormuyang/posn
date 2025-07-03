#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int ans = 0;
    for (int i = 2; i * i <= n; i++)
    {
        bool is_prime = true;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            ans += 1;
        }
    }
    cout << ans << '\n';
    return 0;
}
