#include <iostream>

using namespace std;

// 6
// 12 35 1 10 34 1
// output: 34

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int mx1 = INT_MIN, mx2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > mx1)
        {
            mx2 = mx1;
            mx1 = a[i];
        }
        else if (a[i] > mx2 && a[i] != mx1)
        {
            mx2 = a[i];
        }
    }
    
    if (mx2 == INT_MIN)
    {
        cout << "-1\n";
    }
    else
    {
        cout << mx2 << '\n';
    }
    return 0;
}