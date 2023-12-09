#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        if (c == 50)
            cout << 0 << endl;
        else if (c > 50)
        {
            int t;
            int rem = (c - 50) % 3;
            int qt = (c - 50) / 3;
            if (rem == 0)
                t = qt;
            else if (rem == 1)
                t = qt + 2;
            else if (rem == 2)
                t = qt + 4;
            cout << t << endl;
        }
        else
        {
            int t;
            int rem = (50 - c) % 2;
            int qt = (50 - c) / 2;
            if (rem == 1)
                t = qt + 3;
            else
                t = qt;
            cout << t << endl;
        }
    }
    return 0;
}