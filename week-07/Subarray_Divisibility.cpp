#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    map<int, int> mp;

    int i = 0, j = 0, sum = 0, cnt = 0;
    while (j < n)
    {
        sum += a[j];
        // cout << sum << " " << sum % n << endl;
        mp[sum]++;
        if (sum % n == 0)
            cnt++;
        if (sum >= n)
            cnt += mp[sum % n];
        j++;
    }
    cout << cnt << endl;
    return 0;
}