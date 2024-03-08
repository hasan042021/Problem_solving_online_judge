#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        set<int, greater<int>> a;
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            a.insert(d);
        }

        auto it = a.begin();
        int r = 0;
        for (int i = 0; i < 2 && it != a.end(); ++i, ++it)
        {
            r += *it;
        }
        cout << r << endl;
    }
    return 0;
}