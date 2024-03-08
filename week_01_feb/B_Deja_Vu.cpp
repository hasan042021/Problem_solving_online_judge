#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), b(q);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < q; i++)
            cin >> b[i];
        for (int i : b)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] % (1 << i) == 0)
                {
                    int k = i - 1;
                    a[j] += (1 << k);
                }
            }
        }
        for (auto i : a)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}