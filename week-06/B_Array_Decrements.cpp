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

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int dif = -1;
        int z_dif = -1;
        bool ok = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                ok = false;
                break;
            }
            if (b[i] != 0)
            {
                if (dif == -1)
                    dif = a[i] - b[i];
                else
                {
                    if ((a[i] - b[i]) != dif)
                    {
                        ok = false;
                        break;
                    }
                }
            }
            else
                z_dif = max(z_dif, a[i] - b[i]);
        }
        if (!ok)
            cout << "NO" << endl;
        else
        {
            if (dif == -1 || (z_dif <= dif))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}