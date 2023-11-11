#include <bits/stdc++.h>
using namespace std;

#define ll long long
const ll M = 1000000007;

bool isPossible(ll a[], ll s, ll n, ll res)
{
    ll remainingSum = s;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= res)
        {
            continue;
        }
        else
        {
            if (remainingSum - a[i] <= 0)
            {
                return false;
            }
            else
            {
                remainingSum -= a[i];
            }
        }
    }
    return remainingSum > 0;
}

ll findMinimumValue(ll a[], ll s, ll n)
{
    ll lo = 0, hi = 100001;

    while (hi - lo > 0)
    {
        ll mid = (lo + hi) / 2;

        if (!isPossible(a, s, n, mid))
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }

    if (isPossible(a, s, n, lo))
    {
        return lo;
    }
    else
    {
        return hi;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, s;
        cin >> n >> s;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll minVal = findMinimumValue(a, s, n);
        cout << minVal << endl;
    }
    return 0;
}