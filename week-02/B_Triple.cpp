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
        int frq[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            frq[a[i]]++;
        }

        bool exist = false;
        for (int i = 1; i <= n; i++)
        {
            if (frq[i] >= 3)
            {
                cout << i << endl;
                exist = true;
                break;
            }
        }
        if (!exist)
            cout << -1 << endl;
    }
    return 0;
}