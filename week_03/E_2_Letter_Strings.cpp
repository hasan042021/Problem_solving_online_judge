#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<string, ll> m;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            string temp = s;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (ch != s[0])
                {
                    temp[0] = ch;
                    ans += m[temp];
                }
            }
            temp = s;
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                if (ch != s[1])
                {
                    temp[1] = ch;
                    ans += m[temp];
                }
            }
            m[s]++;
            // cout << i << ans << endl;
        }
        cout << ans << endl;
    }
    return 0;
}