#include <bits/stdc++.h>

using namespace std;

// Problem: Given a sorted array, find the pair of elements that sum to a given value.
// Approach: Use two pointers technique.
// Time Complexity: O(n)
// Space Complexity: O(1)

// Input:
// 9 23
// 1 3 7 8 10 12 15 18 20

// Output:
// 3 20

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int left = 0, right = n - 1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            cout << arr[left] << ' ' << arr[right] << '\n';
            return 0;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    cout << "-1\n";
    return 0;
}