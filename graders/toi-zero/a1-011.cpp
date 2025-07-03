#include <iostream>

using namespace std;

int main()
{
    // 'A' is 65 in ASCII
    // 'a' is 97 in ASCII

    string s; cin >> s;
    int cnt[128] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        cnt[s[i]]++;
    }

    bool check[128] = {false};
    for (int i = 0; i < s.length(); i++)
    {
        if (!check[s[i]])
        {
            cout << cnt[s[i]] << s[i];
            check[s[i]] = true;
        }
    }
    return 0;
}