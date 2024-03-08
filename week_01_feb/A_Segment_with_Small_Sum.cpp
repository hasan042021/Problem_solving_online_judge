#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, s;
    cin >> n >> s;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long sum = 0;
    int i = 0, j = 0, mx = 0;
    while (j < n)
    {
        sum += a[j];

        while (sum > s)
        {
            sum -= a[i];
            i++;
        }

        mx = max(mx, j - i + 1);
        j++;
    }
    cout << mx << endl;
    return 0;
}