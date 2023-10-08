#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    int gcd[mx + 1] = {0};
    for (int i = 2; i <= mx; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] % i == 0)
                gcd[i]++;
        }
    }
    int mx_gcd = INT_MIN;
    int idx = 0;
    for (int i = 2; i <= mx; i++)
    {
        if (mx_gcd < gcd[i])
        {
            mx_gcd = gcd[i];
            idx = i;
        }
    }
    cout << idx;

    return 0;
}