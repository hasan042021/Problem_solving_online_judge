#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        bool ok = true;
        for (int i = 0; i < (a.size() - 1); i++)
        {

            if (a[i] != 'Y' && a[i] != 'e' && a[i] != 's')
            {
                ok = false;
                break;
            }
            else if (a[i] == 'Y' && a[i + 1] != 'e')
            {
                ok = false;
                break;
            }
            else if (a[i] == 'e' && a[i + 1] != 's')
            {
                ok = false;
                break;
            }
            else if (a[i] == 's' && a[i + 1] != 'Y')
            {
                ok = false;
                break;
            }
        }
        if (a[0] != 'Y' && a[0] != 'e' && a[0] != 's')
        {
            ok = false;
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}