#include <iostream>

using namespace std;

// There are 3 cases to consider:
// 1. contain "BUU"
// 2. contain "B"
// 3. else

int main()
{
    string s; cin >> s;
    int n = s.size();

    bool has_b = false;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B' or s[i] == 'b')
        {
            has_b = true;
            int cnt = 0;
            while (i < n and (s[i + 1] == 'U' or s[i + 1] == 'u'))
            {
                cnt++;
                i++;
            }
            mx = max(mx, cnt);
        }
    }

    if (!has_b)
    {
        for (int i = 0; i < n; i++)
        {
            if (i % 3 == 0) cout << 'B';
            else cout << 'U';
        }
    }
    else if (mx < 2)
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
            if (s[i] == 'B' or s[i] == 'b')
            {
                while (++i < n) cout << 'U';
            }
        }
    }
    else {
        cout << "Yes " << mx << '\n';
    }

    return 0;
}