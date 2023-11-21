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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int i = n - 2, cnt = 0;
        while (i >= 0)
        {
            if (a[i + 1] == 0)
            {
                cnt = -1;
                break;
            }
            while (a[i] >= a[i + 1])
            {
                a[i] /= 2;
                cnt++;
            }
            i--;
        }
        cout << cnt << endl;
    }
    return 0;
}