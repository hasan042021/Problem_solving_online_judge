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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int mn_o = INT_MAX;
        for (auto e : a)
        {
            if (e % 2 == 1)
                mn_o = min(mn_o, e);
        }
        bool ok_e = true;
        for (auto e : a)
        {
            if ((e % 2 == 0) && mn_o >= e)
            {
                ok_e = false;
            }
        }
        bool ok_o = true;
        for (auto e : a)
        {
            if ((e % 2 == 1) && mn_o >= e)
            {
                ok_o = false;
            }
        }
        if (ok_e || ok_o)
            cout << "YeS" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}