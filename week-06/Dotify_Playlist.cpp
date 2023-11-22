#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        vector<int> pl;
        for (int i = 0; i < n; i++)
        {
            int m, ln;
            cin >> m >> ln;
            if (ln == l)
            {
                pl.push_back(m);
            }
        }

        if (pl.size() == 0 && k != 0)
            cout << -1 << endl;
        else
        {
            sort(pl.begin(), pl.end(), greater<int>());
            int sum = 0;
            for (int i = 0; i < pl.size(); i++)
            {
                if (k)
                {
                    sum += pl[i];
                    k--;
                }
            }
            if (k != 0)
                cout << -1 << endl;
            else
                cout << sum << endl;
        }
    }
    return 0;
}