#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int fe = a - 1;
        int se;
        if (c > b)
        {
            int d = c - b;
            se = d + (c - 1);
        }
        else
        {
            se = b - 1;
        }

        if (fe < se)
            cout << 1 << endl;
        else if (se < fe)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}