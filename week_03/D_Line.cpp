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
        string s;
        cin >> s;
        vector<ll> changed;

        ll tot = 0;
        int min_cng = 0;
        for (int i = 0; i < n; i++)
        {
            ll L = i;
            ll R = n - i - 1;
            if (s[i] == 'L')
            {
                if (R > L)
                {
                    min_cng++;
                    tot += R;
                    changed.push_back(R - L);
                }
                else
                {
                    tot += L;
                }
            }
            if (s[i] == 'R')
            {
                if (L > R)
                {
                    min_cng++;
                    tot += L;
                    changed.push_back(L - R);
                }
                else
                {
                    tot += R;
                }
            }
        }
        vector<ll> ans(n + 1);
        for (int i = min_cng; i <= n; i++)
            ans[i] = tot;
        sort(changed.begin(), changed.end(), greater<int>());
        for (int i = min_cng - 1; i >= 1; i--)
        {
            tot -= changed.back();
            changed.pop_back();
            ans[i] = tot;
        }
        if (tot == 0)
            cout << 0 << endl;
        else
        {
            for (int i = 1; i <= n; i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
    return 0;
}