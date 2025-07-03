#include <iostream>

using namespace std;

// Description: Implementation of Insertion Sort
// Time Complexity: O(N^2)
// Space Complexity: O(1)

int main()
{
    // INPUT
    vector<int> a = {2, 5, 1, 4, 3, 6, 8, 7};
    int n = a.size();

    // SORTING
    for (int i = 1; i < n; i++)
    {
        int key = a[i], j = i - 1;
        while (j >= 0 and a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    // OUTPUT
    for (int i : a)
    {
        cout << i << ' ';
    }
    return 0;
}