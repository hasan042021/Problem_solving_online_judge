#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long j = 0, sum = 0, cnt = 0;
    map<long long, long long> mp;
    mp[sum] = 1;
    while (j < n)
    {
        sum += a[j];
        if (sum == x)
            cnt++;
        else
            cnt += mp[sum - x];
        mp[sum]++;

        j++;
    }
    cout << cnt << endl;

    return 0;
}