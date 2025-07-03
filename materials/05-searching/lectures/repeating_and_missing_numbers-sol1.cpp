#include <bits/stdc++.h>

using namespace std;

/*
Problem:
    Given an array of size n containing numbers from 1 to n with one number repeating,
    find the repeating and the missing numbers.
*/
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Input:
// 7
// 1 5 1 2 7 3 4

// Output:
// 1 6

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Find the repeating number
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[i] << ' ';
                break;
            }
        }
    }

    // Find the missing number
    for (int i = 1; i <= n; i++)
    {
        bool found = false;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}