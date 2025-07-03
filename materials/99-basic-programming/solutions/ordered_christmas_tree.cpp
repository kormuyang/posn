#include <iostream>

using namespace std;

int main() {
    string s; cin >> s;
    int n = s.length();
    int l = ceil((-1 + sqrt(1 + 8 * n)) / 2), left = 0;
    if(l % 2)
    {
        if(n - ((l - 1) * l) / 2 > l - 2)
        {
            left = n - ((l - 1) * l / 2);
        }
        else left = l - 2;
    }
    else left = l - 1;
    int idx = 0;
    for(int i = 1; i < l; i++)
    {
        if(i % 2)
        {
            for(int j = 0; j < left - i; j++) cout << " ";
            for(int j = 0; j < i; j++)
            {
                cout << s[i * (i + 1) / 2 - j - 1];
                idx++;
            }
            cout << "\n";
        }
        else
        {
            for(int j = 0; j < left - 1; j++) cout << " ";
            for(int j = 0; j < i; j++)
            {
                cout << s[idx];
                idx++;
            }
            cout << "\n";
        }
    }
    if(l % 2)
    {
        for(int j = 0; j < left - (n - idx); j++) cout << " ";
        for(int j = 0; j < n - idx + 1; j++) cout << s[l * (l + 1) / 2 - j - 1];
    }
    else
    {
        for(int j = 0; j < left - 1; j++) cout << " ";
        while(idx < n)
        {
            cout << s[idx];
            idx++;
        }
    }
    cout << "\n";
    return 0;
}
