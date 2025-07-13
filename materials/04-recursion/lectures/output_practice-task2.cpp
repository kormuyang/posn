#include <iostream>

using namespace std;

// Task: find the output of this code

void func(int n)
{
    if (n == 0)
        return;
    cout << n << '\n';
    func(n - 1);
    cout << n << '\n';
    return;
}

int main()
{
    func(3);
    return 0;
}