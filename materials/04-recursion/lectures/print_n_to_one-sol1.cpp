#include <iostream>

using namespace std;

// Solution 1
void printOneToN(int n)
{
    if (n == 0)
        return;
    printOneToN(n - 1);
    cout << n << ' ';
    return;
}

// Solution 2
// void printOneToN(int n, int i = 1)
// {
//     cout << i << ' ';
//     if (i == n)
//         return;
//     printOneToN(n, i + 1);
//     return;
// }

int main()
{
    int n = 5;
    printOneToN(n);
    return 0;
}