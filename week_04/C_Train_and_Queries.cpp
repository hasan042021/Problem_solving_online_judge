#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n);
        map<int, vi> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]].push_back(i);
        }

        while (q--)
        {
            int a, b;
            cin >> a >> b;
            if (mp[a].empty() || mp[b].empty())
            {
                cout << "NO" << endl;
                continue;
            }
            else if (a == b)
            {
                cout << "NO" << endl;
                continue;
            }
            else if (mp[a].front() < mp[b].back())
            {
                cout << "YES" << endl;
                continue;
            }
            else
            {
                cout << "NO" << endl;
                continue;
            }
        }
    }
    return 0;
}