#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string a;
        cin >> a;
        bool ok = true;
        for (int i = 0; i < 3; i++)
        {
            if (i == 0)
            {
                if (a[i] == 'Y' || a[i] == 'y')
                    ok = true;
                else
                {
                    ok = false;
                    break;
                }
            }
            if (i == 1)
            {
                if (a[i] == 'E' || a[i] == 'e')
                    ok = true;
                else
                {
                    ok = false;
                    break;
                }
            }
            if (i == 2)
            {
                if (a[i] == 'S' || a[i] == 's')
                    ok = true;
                else
                {
                    ok = false;
                    break;
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
