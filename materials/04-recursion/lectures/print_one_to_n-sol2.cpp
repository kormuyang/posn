#include <iostream>

using namespace std;

// Solution 1
// string generateOneToN(int n, int i = 1)
// {
//     if (i == n)
//         return to_string(i);
//     return to_string(i) + " " + generateOneToN(n, i + 1);
// }

// Solution 2
string generateOneToN(int n)
{
    if (n == 1)
        return "1";
    return generateOneToN(n - 1) + " " + to_string(i);
}

int main()
{
    int n = 5;
    cout << generateNToOne(n);
    return 0;
}