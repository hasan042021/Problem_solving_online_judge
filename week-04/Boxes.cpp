#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long a[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, greater<long long>());
        long long v = 0;
        long long ans = 0;

        for (long long i = 0; i < n; i++)
        {
            if (v < a[i])
            {
                v = 0;
                ans++;
            }
            v ^= a[i];
        }
        cout << ans << endl;
    }

    return 0;
}
