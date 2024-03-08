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
        int a[n + 1];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int ans = 0;
        int inc = 0;
        for (int i = 1; i <= n; i++)
        {
            int idx = i + inc;
            if (idx < a[i])
            {
                int x = a[i] - idx;
                ans += x;
                inc += x;
            }
        }
        cout << ans << endl;
    }
    return 0;
}