#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll sum = 0, op = 0;
        bool negSeg = false;
        for (int i = 0; i <= n; i++)
        {
            if (i < n)
                sum += abs(a[i]);
            if (negSeg)
            {
                if (i == n || a[i] > 0)
                {
                    op++;
                    negSeg = false;
                }
            }
            else
            {
                if (a[i] < 0)
                {
                    negSeg = true;
                }
            }
        }

        cout << sum << " " << op << endl;
    }
    return 0;
}