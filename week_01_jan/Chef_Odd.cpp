#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if (a < (b * 2))
        {
            cout << "NO" << endl;
        }
        else if (a == (b * 2))
        {
            cout << "YES" << endl;
        }
        else
        {
            long long odds = (a / 2) + (a % 2);
            long long extra_odds = odds - b;

            if (extra_odds % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}