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
        vector<string> a(n);
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            bool found = false;

            for (int j = 0; j < a[i].size(); j++)
            {
                string n, m;
                for (int k = 0; k < j; k++)
                {
                    n += a[i][k];
                }
                for (int k = j; k < a[i].size(); k++)
                {
                    m += a[i][k];
                }
                if (mp[n] > 0 && mp[m] > 0)
                    found = true;
            }
            if (found)
                cout << 1;
            else
                cout << 0;
        }
        cout << endl;
    }
    return 0;
}