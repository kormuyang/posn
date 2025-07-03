#include <bits/stdc++.h>

using namespace std;

/*
Problem:
    Given an array and an integer k, where arr[i] is the number of pages of a book and k is total number of students.
    All the books need to be allocated to k students in contiguous manner, with each student getting at least one book.
    The task is to minimize the maximum number of pages allocated to a student.
    If it is not possible to allocate books to all students, return -1.
*/
// Time Complexity: O(n log m), where n is the number of books and m is the maximum number of pages in a book.
// Space Complexity: O(1)

// Input:
// 4 2
// 12 34 67 90

// Output:
// 113

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    int left = -1, right = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        left = max(left, arr[i]);
        right += arr[i];
    }
    int ans = right;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        int cnt = 1, sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum > mid)
            {
                cnt++;
                sum = arr[i];
            }
        }
        if (cnt < k)
        {
            right = mid - 1;
        }
        else if (cnt == k)
        {
            right = mid - 1;
            ans = min(ans, mid);
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}