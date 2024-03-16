#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forI(i, s, n) for (i = s; i < n; i++)
const int mod = 1e9 + 7;

ll binary_power(ll base, ll power)
{
    ll res = 1;
    while (power)
    {
        if (power % 2 == 0)
        {
            base *= base;
            base %= mod;
            power /= 2;
        }
        else if (power % 2 == 1)
        {
            res *= base;
            res %= mod;
            power--;
        }
    }
    return res % mod;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i;
        cin >> n >> k;
        ll ans = 0;
        forI(i, 0, 32)
        {
            if ((1 << i) & k)
                ans += binary_power(n, i);
        }
        cout << ans % mod << endl;
    }
    return 0;
}