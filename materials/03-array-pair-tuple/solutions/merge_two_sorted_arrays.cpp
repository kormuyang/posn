#include <iostream>

using namespace std;

// 4 4
// 1 3 6 8
// 2 4 5 7
// output: 1 2 3 4 5 6 7 8

int main()
{
    int n, m; cin >> n >> m;
    vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(m); for (int i = 0; i < m; i++) cin >> b[i];

    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            cout << a[i] << ' ';
            i++;
        }
        else
        {
            cout << b[j] << ' ';
            j++;
        }
    }

    while (i < n)
    {
        cout << a[i] << ' ';
        i++;
    }

    while (j < m)
    {
        cout << b[j] << ' ';
        j++;
    }
    
    return 0;
}