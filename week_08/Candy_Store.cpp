#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (y > x)
        {
            cout << (x * 1) + ((y - x) * 2) << endl;
        }
        else
            cout << y * 1 << endl;
    }
    return 0;
}