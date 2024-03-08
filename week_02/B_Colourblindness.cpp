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
        string a, b;
        cin >> a >> b;
        bool same = true;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i] || (a[i] == 'G' && b[i] == 'B') || (a[i] == 'B' && b[i] == 'G'))
            {
                continue;
            }
            else
            {
                same = false;
                break;
            }
        }
        if (same)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}