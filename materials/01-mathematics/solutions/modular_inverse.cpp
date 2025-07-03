#include <iostream>

using namespace std;

bool check_coprime(int a, int b)
{
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0 and b % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int a, m; cin >> a >> m;

    if (check_coprime(a, m) == false)
    {
        cout << "-1\n";
        return 0;
    }

    for (int i = 1; i < m; i++)
    {
        if ((a * i) % m == 1)
        {
            cout << i << '\n';
            return 0;
        }
    }

    return 0;
}