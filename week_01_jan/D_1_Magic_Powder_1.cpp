#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int cnt = 0;
    while (true)
    {
        for (int i = 0; i < n; i++)
        {
            if (b[i] >= a[i])
            {
                b[i] -= a[i];
            }
            else
            {
                k = k - (a[i] - b[i]);
                b[i] = 0;
            }
        }
        if (k >= 0)
            cnt++;
        else
            break;
    }
    cout << cnt << endl;

    return 0;
}