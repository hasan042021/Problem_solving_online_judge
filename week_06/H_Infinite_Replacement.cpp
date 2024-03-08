#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string b;
        cin >> b;
        int n;
        n = s.size();
        int m;
        m = b.size();

        if (b.size() == 1)
        {
            if (b[0] == 'a')
            {
                cout << 1 << endl;
            }
            else
            {
                ll ans = (1LL << n);
                cout << ans << endl;
            }
        }
        else
        {
            if (count(b.begin(), b.end(), 'a') > 0)
            {
                cout << -1 << endl;
            }
            else
            {
                ll ans = (1LL << n);
                cout << ans << endl;
            }
        }
    }
    return 0;
}