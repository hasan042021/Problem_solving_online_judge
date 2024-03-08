#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long s;
    cin >> n >> s;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = 0, mn = INT_MAX;
    long long sum = 0;
    while (r < n)
    {
        sum += a[r];
        while (sum >= s)
        {
            mn = min(mn, r - l + 1);
            sum -= a[l];
            l++;
        }
        r++;
    }
    if (mn == INT_MAX)
        cout << -1 << endl;
    else
        cout << mn << endl;
    return 0;
}