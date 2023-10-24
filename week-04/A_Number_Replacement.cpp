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
        string s;
        cin >> s;
        bool ok = true;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    if (s[i] != s[j])
                        ok = false;
                }
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}