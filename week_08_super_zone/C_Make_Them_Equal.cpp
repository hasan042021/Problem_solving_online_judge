#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forI(i, s, n) for (i = s; i < n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string c, s;
        cin >> n >> c >> s;
        bool flag = true;
        for (char a : s)
        {
            if (a != c[0])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << 0 << endl;
        else
        {
            int idx = 0;
            int i;
            forI(i, n / 2, n)
            {
                if (s[i] == c[0])
                {
                    idx = i;
                    break;
                }
            }
            if (idx)
            {
                cout << 1 << endl
                     << idx + 1 << endl;
            }
            else
            {
                cout << 2 << endl;
                cout << n - 1 << " " << n << endl;
            }
        }
    }
    return 0;
}