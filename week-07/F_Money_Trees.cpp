#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int sum = a[0];
        int ans = 0;
        int i = 0;
        int j = 1;

        if (sum <= k)
            ans = 1;

        while (j < n)
        {
            if (b[j - 1] % b[j] == 0)
                sum += a[j];
            else
            {
                sum = a[j];
                i = j;
            }

            while (sum > k)
            {
                sum -= a[i];
                i++;
            }

            ans = max(ans, j - i + 1);
            j++;
        }
        cout << ans << endl;
    }
    return 0;
}