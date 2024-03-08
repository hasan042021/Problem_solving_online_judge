#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        map<char, int> mp;
        string a;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            char c = tolower(s[i]);
            if (mp[c] == 0)
            {
                mp[c]++;
                a += c;
                if (a == "meow")
                {
                    if (i + 1 < n && tolower(s[i + 1]) != 'w')
                    {
                        mp['m'] = 0;
                        mp['e'] = 0;
                        mp['o'] = 0;
                        mp['w'] = 0;
                    }
                }
            }
        }

        if (a == "meow")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
