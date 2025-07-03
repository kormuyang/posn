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

int first(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            right = mid - 1;
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
    return ans;
}

int last(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1;
    int ans = -1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            ans = mid;
            left = mid + 1;
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
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 5, 6, 7};
    int target = 5;
    cout << first(arr, target) << " " << last(arr, target) << "\n";
    return 0;
}