#include <iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int l = 0, h = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        h = max(h, a[i]);
        l = min(l, a[i]);
    }
    for (int i = h; i > 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] < i)
            {
                for (int k = 0; k < 2 * abs(a[j]); k++) cout << " ";
            }
            else
            {
                for (int k = 0; k < i - 1; k++) cout << " ";
                cout << "/";
                for (int k = 0; k < 2 * (a[j] - i); k++) cout << " ";
                cout << "\\";
                for (int k = 0; k < i - 1; k++) cout << " ";
            }
        }
        cout << '\n';
    }
    for (int i = -1; i >= l; i--)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] > i)
            {
                for (int k = 0; k < 2 * abs(a[j]); k++) cout << " ";
            }
            else
            {
                for (int k = 0; k < abs(i) - 1; k++) cout << " ";
                cout << "\\";
                for (int k = 0; k < 2 * abs(a[j] - i); k++) cout << " ";
                cout << "/";
                for (int k = 0; k < abs(i) - 1; k++) cout << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}
