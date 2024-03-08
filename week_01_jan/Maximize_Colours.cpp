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
        int cnt = 0;
        if (a > 1)
            cnt++;
        if (b > 1)
            cnt++;
        if (c > 1)
            cnt++;
        int ind = 0;
        if (a > 0)
            ind++;
        if (b > 0)
            ind++;
        if (c > 0)
            ind++;
        if (cnt == 2)
            ind += 1;
        if (cnt == 3)
            ind += 3;
        int mn = min({a, b, c});
        int mx = max({a, b, c});
        if (mn == 2 && mx == 2)
            cout << 4 << endl;
        else if (mn == 2)
            cout << 5 << endl;
        else
            cout << ind << endl;
    }
    return 0;
}