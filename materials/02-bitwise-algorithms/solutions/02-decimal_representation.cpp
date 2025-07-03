#include <iostream>

using namespace std;

int main()
{
    string n; cin >> n;
    long long ans = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '0')
        {
            ans = ans * 2;
        }
        else
        {
            ans = ans * 2 + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}