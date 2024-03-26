#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forI(i, s, n) for (i = s; i < n; i++)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n], i;
        forI(i, 0, n) cin >> a[i];
        bool flag = true;
        vector<int> v(a, a + n);
        sort(v.begin(), v.end());
        forI(i, 0, n)
        {
            if (a[i] != v[i] && i < k && (n - i) <= k)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}