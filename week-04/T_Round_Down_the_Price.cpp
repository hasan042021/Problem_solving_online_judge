#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        ll x = 1, ans = m - x;
        while (x <= m)
        {
            ans = min(ans, m - x);
            x *= 10;
        }
        cout << ans << endl;
    }
    return 0;
}