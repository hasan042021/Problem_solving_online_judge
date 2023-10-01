#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int greater = max(a, b);
    if (c > greater)
        cout << -1 << endl;
    else
    {
        bool res = false;
        for (int i = c, j = 1; i <= greater; j++)
        {
            if (i >= a && i <= b)
            {
                cout << i << endl;
                res = true;
                break;
            }
            else
            {
                i = i * j;
            }
        }
        if (!res)
            cout << -1 << endl;
    }

    return 0;
}