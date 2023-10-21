#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;
        vector<int> ans;
        int freq[101] = {0};
        for (int i = 0; i < m; i++)
        {
            int a;
            cin >> a;
            ans.push_back(a);
            freq[a]++;
        }
        // cout << ans.size() << endl;
        int sum = 0;
        bool found = false;
        for (int i = 1; i <= 100; i++)
        {
            if (freq[i] == 0)
            {
                sum += i;
                if (sum > s)
                    break;
                ans.push_back(i);
                if (sum == s)
                {
                    found = true;
                    break;
                }
            }
        }
        // cout << sum << endl;
        if (found)
        {
            sort(ans.begin(), ans.end());
            int i = 1;
            bool ok = true;
            for (int e : ans)
            {
                if (i != e)
                {
                    ok = false;
                    break;
                }
                i++;
            }
            if (ok)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}