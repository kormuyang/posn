#include <bits/stdc++.h>

using namespace std;

// Problem: Calculate the square root of a number using binary search
// Time Complexity: O(log n)
// Space Complexity: O(1)

// Input:
// 16

// Output:
// 4

int main()
{
    int number = 24;
    int left = 0, right = number;
    int ans = 0;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (mid * mid == number)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < number)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    cout << ans << '\n';
    return 0;
}