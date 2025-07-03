#include <iostream>

using namespace std;

const long long MOD = 1000000007;

int main()
{
    long long a, b; cin >> a >> b;
    cout << ((a % MOD) * (b % MOD)) % MOD << '\n';
    return 0;
}