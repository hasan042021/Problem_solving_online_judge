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
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
        }
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i] - mn;
        }
        cout << sum << endl;
    }
    return 0;
}