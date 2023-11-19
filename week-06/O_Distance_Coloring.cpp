#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll res = 1;
        for (int i = 0; i < n; i++)
        {
            res = (res * k) % mod;
            if (k > 1)
                k--;
        }
        cout << res << endl;
    }
    return 0;
}