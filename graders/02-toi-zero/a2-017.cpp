#include <iostream>

using namespace std;

int main()
{
    char a, b, c;
    cin >> a >> b >> c;

    int ans = 60;
    if (a == 'M') ans += 20;
    else if (a == 'L') ans += 40;

    if (b == 'T') ans += 20;

    if (c != 'N')
    {
        int d; cin >> d;
        if (c == 'P') ans += 15 * d;
        else ans += 10 * d;
    }

    cout << ans << '\n';
    return 0;
}