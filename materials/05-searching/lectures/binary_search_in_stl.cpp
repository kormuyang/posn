#include <bits/stdc++.h>

using namespace std;

// Description: binary search functions in STL
// 1. binary_search -> return true if target is present in the array
// 2. lower_bound -> return index of first element >= target
// 3. upper_bound -> return index of first element > target

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 5, 5, 7, 8};
    int target = 5;

    // 1. binary_search -> return true if target is present in the array
    cout << binary_search(arr.begin(), arr.end(), target) << '\n';

    // 2. lower_bound -> return iterator of the first element that >= target
    cout << lower_bound(arr.begin(), arr.end(), target) - arr.begin() << '\n';
    if (lower_bound(arr.begin(), arr.end(), target) == arr.end())
    {
        cout << "Not found\n";
    }
    else if (*lower_bound(arr.begin(), arr.end(), target) == target)
    {
        cout << "Found\n";
    }
    else
    {
        cout << "Not found\n";
    }

    // 3. upper_bound -> return iterator of the first element that > target
    cout << upper_bound(arr.begin(), arr.end(), target) - arr.begin() << '\n';

    return 0;
}