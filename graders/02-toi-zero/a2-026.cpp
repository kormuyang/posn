#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<string> s(n);
    vector<int> w(n);
    int cnt = 0, mx = 0;
    for (int i = 0; i < n; i++) 
    {
        cin >> s[i] >> w[i];
        if (w[i] > 15) cnt++;
        if (w[i] > w[mx]) mx = i;
    }
    cout << cnt << '\n';
    cout << s[mx] << ' ' << w[mx] << '\n';
    return 0;
}