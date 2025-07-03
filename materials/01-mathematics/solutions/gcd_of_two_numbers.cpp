#include <iostream>

using namespace std;

int main()
{
    int a, b; cin >> a >> b;
    if (a > b)
    {
        int tmp = a;
        a = b;
        b = tmp;
    }
    for (int i = a; i > 1; i--)
    {
        if (a % i == 0 and b % i ==0)
        {
            cout << i << '\n';
            return 0;
        }
    }
    cout << "1\n";
    return 0;
}
