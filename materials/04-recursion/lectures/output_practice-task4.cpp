#include <iostream>

using namespace std;

// Task: find the output of this code

int func(int n)
{
    if (n == 1)
        return 0;
    return 1 + func(n / 2);
}

int main()
{
    cout << func(16);
    return 0;
}