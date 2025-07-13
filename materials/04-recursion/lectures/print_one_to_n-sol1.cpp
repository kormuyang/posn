#include <iostream>

using namespace std;

void printNToOne(int n)
{
    if (n == 0)
        return;
    cout << n << ' ';
    printOneToN(n - 1);
    return;
}

int main()
{
    int n = 5;
    printNToOne(n);
    return 0;
}