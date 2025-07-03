#include <iostream>

using namespace std;

// Description: Implementation of Bubble Sort
// Time Complexity: O(N^2)
// Space Complexity: O(1)

int main()
{
    // INPUT
    vector<int> a = {2, 5, 1, 4, 3, 6, 8, 7};
    int n = a.size();

    // SORTING
    bool swapped = true;
    while (swapped)
    {
        swapped = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                swapped = true;
            }
        }
    }

    // OUTPUT
    for (int i : a)
    {
        cout << i << ' ';
    }
    return 0;
}