#include <iostream>

using namespace std;

// Find the output of this code.

void func(int n)
{
    if (n == 0)
        return;
    func(n / 2);
    cout << (n % 2);
    return;
}

int main()
{
    func(11);
    return 0;
}