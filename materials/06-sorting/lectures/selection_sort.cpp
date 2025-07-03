#include <iostream>

using namespace std;

// Description: Implementation of Selection Sort
// Time Complexity: O(N^2)
// Space Complexity: O(1)

int main()
{
    // INPUT
    vector<int> a = {2, 5, 1, 4, 3, 6, 8, 7};
    int n = a.size();

    // SORTING
    for (int i = 0; i < n; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        swap(a[i], a[min_idx]);
    }

    // OUTPUT
    for (int i : a)
    {
        cout << i << ' ';
    }
    return 0;
}