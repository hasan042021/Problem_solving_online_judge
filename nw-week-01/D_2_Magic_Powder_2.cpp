#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool search(ll v, ll k, ll a[], ll b[], ll n)
{
    ll extra = 0;
    for (int i = 0; i < n; i++)
    {
        if (v * a[i] > b[i])
        {
            extra += v * a[i] - b[i];
        }
    }
    if (extra > k)
        return false;
    return true;
}

int main()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    ll l = 0, h = 200000000000;
    ll ans = 0, mid;
    while (l <= h)
    {
        mid = (h + l) / 2;
        if (search(mid, k, a, b, n))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}