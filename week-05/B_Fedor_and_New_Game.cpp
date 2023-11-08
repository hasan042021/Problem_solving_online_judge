#include <bits/stdc++.h>
using namespace std;

int cnt1(long n)
{
    int c = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        c++;
    }
    return c;
}

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    long sldrs[m + 1];
    for (int i = 0; i <= m; i++)
    {
        cin >> sldrs[i];
    }

    int cnt = 0;
    long res = 0;
    for (int i = 0; i < m; i++)
    {
        res = sldrs[i] ^ sldrs[m];
        if (cnt1(res) <= k)
        {
            cnt++;
        }
    }

    cout << cnt << endl;
    return 0;
}
