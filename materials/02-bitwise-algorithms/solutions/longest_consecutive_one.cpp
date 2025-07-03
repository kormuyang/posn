#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int cnt = 0;
    while (n)
    {
        cnt++;
        n = (n & (n << 1));
    }
    //        A_0 = 0b1110111100
    // (A_0 << 1) = 0b1101111000
    //        A_1 = 0b1100111000 = A_0 & (A_0 << 1)
    // (A_1 << 1) = 0b1001110000
    //        A_2 = 0b1000110000 = A_1 & (A_1 << 1)
    cout << cnt << '\n';
    return 0;
}