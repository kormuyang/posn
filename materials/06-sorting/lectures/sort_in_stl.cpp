#include <iostream>

using namespace std;

// Fucntion Sort() in C++ STL
// Time Complexity: O(N log N)
// Space Complexity: O(1)

bool comp_greater(int a, int b)
{
    // if (a > b)
    // {
    //     return true;
    // }
    // else
    // {
    //     return false;
    // }
    return (a > b);
}

bool comp(int a, int b)
{
    if ((a % 2 == 1) and (b % 2 == 0))
    {
        return true;
    }
    else if ((a % 2 == 0) and (b % 2 == 1))
    {
        return false;
    }
    else
    {
        return (a > b);
    }
}

int main()
{
    vector<int> a = {2, 5, 1, 4, 3, 6, 8, 7};

    // MIN -> MAX
    // sort(a.begin(), a.end());

    // MAX -> MIN
    // Template -> a kind of structure
    // sort(a.begin(), a.end(), greater<>());

    // MAX -> MIN
    // The third paramter need to be defined as a boolean function
    // sort(a.begin(), a.end(), comp_greater);

    // ODD -> EVEN, MAX -> MIN
    sort(a.begin(), a.end(), comp);

    // OUTPUT
    for (int i : a)
    {
        cout << i << ' ';
    }

    return 0;
}