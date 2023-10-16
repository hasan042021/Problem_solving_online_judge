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
        int a[n][n - 1];
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (j == 0)
                {
                    if (mp.find(a[i][j]) == mp.end())
                    {
                        pair<int, int> pii = {i, 1};
                        mp[a[i][j]] = pii;
                    }
                    else
                    {
                        mp[a[i][j]].second++;
                    }
                }
            }
        }
        int f_e;
        int ans_seq;
        for (auto e : mp)
        {
            if (e.second.second == 1)
            {
                ans_seq = e.second.first;
            }
            else if (e.second.second > 1)
            {
                f_e = e.first;
            }
        }
        cout << f_e << " ";
        for (int j = 0; j < n - 1; j++)
            cout << a[ans_seq][j] << " ";
        cout << endl;
    }
    return 0;
}