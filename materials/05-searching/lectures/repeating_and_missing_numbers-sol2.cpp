#include <bits/stdc++.h>

using namespace std;

/*
Problem:
    Given an array of size n containing numbers from 1 to n with one number repeating,
    find the repeating and the missing numbers.
*/
// Time Complexity: O(n)
// Space Complexity: O(n)

// Input:
// 7
// 1 5 1 2 7 3 4

// Output:
// 1 6

int main()
{
    int n;
    cin >> n;
    vector<bool> found(n + 1, false);

    // Find the repeating number
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (found[x])
        {
            cout << x << ' ';
        }
        else
        {
            found[x] = true;
        }
    }

    // Find the missing number
    for (int i = 1; i <= n; i++)
    {
        if (!found[i])
        {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}