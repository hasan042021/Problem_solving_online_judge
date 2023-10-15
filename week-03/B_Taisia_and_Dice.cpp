#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;
        int mx = s - r;
        int v = r / (n - 1);
        int q = r % (n - 1);
        int last = v + q;
        int cnt = 0;

        while (last > mx)
        {
            last--;
            cnt++;
        }
        cout << last << " ";

        for (int i = 1; i <= n - 2; i++)
        {
            if (cnt > 0)
            {
                cout << v + 1 << " ";
                cnt--;
            }
            else
                cout << v << " ";
        }
        cout << mx << endl;
    }
    return 0;
}