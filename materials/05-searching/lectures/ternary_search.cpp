#include <bits/stdc++.h>

using namespace std;

// Implementation of ternary search with while loop
// Time Complexity: O(log n)
// Space Complexity: O(1)

int main()
{
    vector<int> arr(101);
    int n = arr.size();
    int target = 30;
    for (int i = 1; i < n; i++)
    {
        arr[i] = i;
    }

    int left = 1, right = n - 1;
    while (left <= right)
    {
        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;
        if (arr[mid1] == target)
        {
            cout << "Element found at index: " << mid1 << '\n';
            return 0;
        }
        else if (arr[mid2] == target)
        {
            cout << "Element found at index: " << mid2 << '\n';
            return 0;
        }
        else if (target < arr[mid1])
        {
            right = mid1 - 1;
        }
        else if (target > arr[mid2])
        {
            left = mid2 + 1;
        }
        else
        {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }
    return 0;
}