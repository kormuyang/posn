#include <iostream>

using namespace std;

// 7
// 2 3 -8 7 -1 2 3
// output: 11

int main()
{
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; i++) cin >> a[i];
    int max_sum = a[0], current_sum = a[0];
    
    for (int i = 1; i < n; i++)
    {
        current_sum = max(a[i], current_sum + a[i]);
        max_sum = max(max_sum, current_sum);
    }

    cout << max_sum << endl;
    return 0;
}