#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];
    cout << a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            cout << ' ' << a[i];
        }
    }
    cout << '\n';
    return 0;
}