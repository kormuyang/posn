#include <bits/stdc++.h>

using namespace std;

// Description: implementation of binary search with while loop
// Time Complexity: O(log n)
// Space Complexity: O(1)

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int target = 3;

    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        // cout << "Left: " << left << ", Right: " << right << ", Mid: " << mid << endl;
        if (arr[mid] == target)
        {
            cout << "Element found at index: " << mid << endl;
            return 0;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << "Element not found" << endl;
    return 0;
}