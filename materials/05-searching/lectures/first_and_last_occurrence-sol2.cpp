#include <bits/stdc++.h>

using namespace std;

// Problem: Find the first and last occurrence of a target in a sorted array
// Time Complexity: O(log n)
// Space Complexity: O(1)

// Input:
// 9 5
// 1 2 3 4 5 5 5 6 7

// Output:
// 4 6

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 5, 6, 7};
    int target = 5;
    int first_index = lower_bound(arr.begin(), arr.end(), target) - arr.begin();
    if (arr[first_index] == target)
    {
        int last_index = upper_bound(arr.begin(), arr.end(), target) - arr.begin() - 1;
        cout << first_index << " " << last_index << "\n";
    }
    else
    {
        cout << "-1 -1\n";
    }
    return 0;
}