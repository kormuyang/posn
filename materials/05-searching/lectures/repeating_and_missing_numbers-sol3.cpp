#include <bits/stdc++.h>

using namespace std;

/*
Problem:
    Given an array of size n containing numbers from 1 to n with one number repeating,
    find the repeating and the missing numbers.
*/
// Time Complexity: O(n)
// Space Complexity: O(1)

// Input:
// 7
// 1 5 1 2 6 3 4

// Output:
// 1 7

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> arr[i];

    // Find the repeating number
    for (int i = 1; i <= n; i++)
    {
        if (arr[abs(arr[i]) - 1] < 0)
        {
            cout << abs(arr[i]) << ' ';
            break;
        }
        else
        {
            arr[abs(arr[i])] *= -1;
        }
    }

    // Find the missing number
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > 0)
        {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}