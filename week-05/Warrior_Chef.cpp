#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007

ll f(ll a[], ll s, ll n, ll res)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= res)
        {
            continue;
        }
        else
        {
            if ((s - a[i]) <= 0)
            {
                return 0;
            }
            else
            {
                s -= a[i];
            }
        }
    }
    if (s > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void solve()
{
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll lo = 0, hi = 100001;

    while (hi - lo > 0)
    {
        ll mid = (lo + hi) / 2;

        ll check = f(a, s, n, mid);

        if (check == 0)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }

    ll check = f(a, s, n, lo);
    if (check == 1)
    {
        cout << lo << endl;
    }
    else
    {
        cout << hi << endl;
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}