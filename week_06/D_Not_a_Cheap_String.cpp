#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n;
        cin >> s >> n;
        map<int, vi> mp;
        int scr = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int d = s[i] - 96;
            mp[d].push_back(i);
            scr += d;
        }
        while (scr > n)
        {
            for (int i = 26; i >= 0; i--)
            {
                auto cur = mp[i];
                for (auto e : cur)
                {
                    scr -= i;
                    s[e] = '!';
                    if (scr <= n)
                        break;
                }
                if (scr <= n)
                    break;
            }
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '!')
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}