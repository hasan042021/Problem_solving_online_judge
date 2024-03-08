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

    int l = 0, r = 0;
    long long ans = 0;
    long long sum = 0;
    while (r < n)
    {
        sum += a[r];

        while (sum > s)
        {
            sum -= a[l];
            l++;
        }
        ans += r - l + 1;
        r++;
    }
    cout << ans << endl;
    return 0;
}