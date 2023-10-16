#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<ll, ll> mp;
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            mx = max(mx, mp[a]);
        }
        vector<pair<ll, ll>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end());
        int doll = 0;
        while (mx > 0)
        {
            for (auto e : v)
            {
                // next value does not exist
                if (mp[e.first] > 0 && mp.find(e.first + 1) == mp.end())
                {
                    doll++;
                }
                // next value exist but no more
                else if (mp[e.first] > 0 && mp.find(e.first + 1) != mp.end() && mp[e.first + 1] <= 0)
                {
                    doll++;
                }
                mp[e.first]--;
            }
            mx--;
        }
        cout << doll << endl;
    }
    return 0;
}