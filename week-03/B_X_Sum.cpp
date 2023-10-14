#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int sum = a[i][j];
                // upper left
                int si = i, sj = j;
                while (si > 0 && sj > 0)
                {
                    si--;
                    sj--;
                    sum += a[si][sj];
                }

                // upper right
                si = i, sj = j;
                while (si > 0 && sj < m - 1)
                {
                    si--;
                    sj++;
                    sum += a[si][sj];
                }

                // lower left
                si = i, sj = j;
                while (si < n - 1 && sj > 0)
                {
                    si++;
                    sj--;
                    sum += a[si][sj];
                }
                // lower right
                si = i, sj = j;
                while (si < n - 1 && sj < m - 1)
                {
                    si++;
                    sj++;
                    sum += a[si][sj];
                }
                mx = max(mx, sum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}