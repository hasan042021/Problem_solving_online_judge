#include <bits/stdc++.h>
using namespace std;
#define ll long long

void getPrime(ll p, map<ll, ll> &m)
{
    while (p % 2 == 0)
    {
        m[2]++;
        p /= 2;
    }
    for (ll i = 3; i * i <= p; i++)
    {
        while (p % i == 0)
        {
            m[i]++;
            p /= i;
        }
    }
    if (p > 1)
    {
        m[p]++;
    }
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        map<ll, ll> m;
        ll n, b, f = 0;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> b;
            getPrime(b, m);
        }

        auto it = m.begin();
        while (it != m.end())
        {
            if (it->second % n != 0)
            {
                f = 1;
                break;
            }
            ++it;
        }

        if (f == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}