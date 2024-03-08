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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        bool ok = true;
        for (int i = 1; i < n - 1; i++)
        {
            map<int, int> mp;
            for (int j = 0; j < i; j++)
            {
                int r = a[i] - a[j];
                mp[r] = 1;
            }
            for (int j = i + 1; j < n; j++)
            {
                int r = a[j] - a[i];
                if (mp.find(r) != mp.end())
                {
                    ok = false;
                    break;
                }
            }
        }
        if (ok)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}