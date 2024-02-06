#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int i = 0, j = 0, cnt = 0;
    ll res = 0;
    map<int, int> mp;
    vector<int> v;
    while (j < n)
    {
        mp[a[j]]++;
        if (mp[a[j]] == 1)
            cnt++;

        while (cnt > k)
        {
            mp[a[i]]--;
            if (mp[a[i]] == 0)
                cnt--;
            i++;
        }
        // cout << "current " << a[j] << ", i:" << i << " j:" << j << " - " << j - i + 1 << endl;
        res += j - i + 1;
        j++;
    }
    cout << res << endl;
    return 0;
}