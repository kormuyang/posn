#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;

    //  8     = 0b01000
    //  8 - 1 = 0b00111

    // 16     = 0b10000
    // 16 - 1 = 0b01111

    if ((n & (n - 1)) == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}