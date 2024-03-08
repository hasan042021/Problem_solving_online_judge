#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > n)
                continue;
            mp[a[i]]++;
        }

        int mx = 0;
        for (int i = 1; i <= n; i++)
        {
            int cur = 0;
            for (int k = 1; k <= sqrt(i); k++)
            {

                if (i % k == 0)
                {
                    cur += mp[k];
                    if (k != sqrt(i))
                        cur += mp[i / k];
                }
            }
            mx = max(mx, cur);
        }
        cout << mx << endl;
    }
    return 0;
}