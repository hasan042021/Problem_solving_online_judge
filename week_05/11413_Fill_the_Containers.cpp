#include <bits/stdc++.h>
using namespace std;

bool fill(vector<int> &v, int m, int c)
{
    int cnt = 1;
    int currCap = 0;

    for (int x : v)
    {
        if (x > c)
        {
            return false;
        }

        if (currCap + x > c)
        {
            cnt++;
            currCap = 0;
        }

        currCap += x;
    }

    return cnt <= m;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        vector<int> v(n);
        int maxCap = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            maxCap = max(maxCap, v[i]);
        }

        int l = maxCap, h = 1e9;
        int res = 1e9;

        while (l <= h)
        {
            int mid = (l + h) / 2;

            if (fill(v, m, mid))
            {
                res = min(res, mid);
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        cout << res << endl;
    }

    return 0;
}
