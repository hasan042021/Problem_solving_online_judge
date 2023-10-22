#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (abs(a - b) >= x)
        {
            cout << 1 << endl;
        }
        else if (b > a)
        {
            if (a - x >= l || b + x <= r)
            {
                cout << 2 << endl;
            }
            else if (a + x <= r && b - l >= x)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else if (a > b)
        {
            if (a + x <= r || b - x >= l)
            {
                cout << 2 << endl;
            }

            else if (a - x >= l && r - b >= x)
            {
                cout << 3 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}