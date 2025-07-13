#include <iostream>

using namespace std;

// Solution 1
string generateNToOne(int n, int i = 1)
{
    if (i == n)
        return to_string(i);
    return generateNToOne(n, i + 1) + " " + to_string(i);
}

// Solution 2
// string generateNToOne(int n)
// {
//     if (n == 1)
//         return "1";
//     return to_string(n) + " " + generateNToOne(n - 1);
// }

int main()
{
    int n = 5;
    cout << generateNToOne(n);
    return 0;
}