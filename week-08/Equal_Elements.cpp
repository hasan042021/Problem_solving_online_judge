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
        map<int, int> mp;
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
            mx = max(mp[a], mx);
        }
        bool taken = false;
        int cnt = 0;
        // if (mx == 1)
        //     cout << mp.size() - 1 << endl;
        // else
        // {
        for (auto e : mp)
        {
            if (e.second == mx && !taken)
            {
                taken = true;
            }
            else if (e.second == mx && taken)
            {
                cnt += e.second;
            }
            else if (e.second != mx)
            {
                cnt += e.second;
            }
        }
        cout << cnt << endl;
        // }
    }
    return 0;
}