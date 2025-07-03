#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    while (n >= 10)
    {
        cout << n << '\n';
        n = n / 10;
        cnt++;
    }
    cout << cnt + 1 << '\n';
    return 0;
}
