#include <iostream>

using namespace std;

// Task: find the output of this code

int func(int n, int i)
{
    if (i == 0)
        return 1;
    return n * func(n, i - 1);
}

int main()
{
    cout << func(3, 5);
    return 0;
}