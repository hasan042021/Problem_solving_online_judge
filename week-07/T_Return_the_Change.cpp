#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m;
        cin >> m;
        int unit = m % 10;
        if (unit >= 5)
            m = m - unit + 10;
        else
            m = m - unit;
        cout << 100 - m << endl;
    }
    return 0;
}