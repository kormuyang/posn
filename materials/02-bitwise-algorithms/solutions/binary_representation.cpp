#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    string ans = "";
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans = "1" + ans;
        }
        else
        {
            ans = "0" + ans;
        }
        n /= 2;
    }
    cout << ans << '\n';
    return 0;
}