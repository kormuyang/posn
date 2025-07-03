#include <bits/stdc++.h>

using namespace std;

// Problem: Given a sorted array, find the triplet of elements that sum to a given value.
// Approach: Use two pointers technique.
// Time Complexity: O(n^2)
// Space Complexity: O(1)

// Input:
// 9 23
// 1 3 7 8 10 12 15 18 20

// Output:
// 1 7 15

int main()
{
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n - 2; i++)
    {
        int left = i + 1, right = n - 1;
        while (left < right)
        {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == target)
            {
                cout << arr[i] << ' ' << arr[left] << ' ' << arr[right] << '\n';
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
    }

    cout << "-1\n";
    return 0;
}