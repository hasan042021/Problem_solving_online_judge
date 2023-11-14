#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x = 0, y = 0, f = 0;
        cin >> n;
        string s;
        cin >> s;

        if (s[0] == 'A')
            x++;
        else if (s[0] == 'B')
            f = 1;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'A' && f == 0)
            {
                x++;
                f = 0;
            }
            else if (s[i] == 'B' && f == 1)
            {
                f = 1;
                y++;
            }
            else if (s[i] == 'A' && f == 1)
                f = 0;
            else if (s[i] == 'B' && f == 0)
                f = 1;
        }

        cout << x << ' ' << y << endl;
    }

    return 0;
}
