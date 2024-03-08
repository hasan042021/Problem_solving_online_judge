#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pii> v;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            v.push_back({b, i});
        }
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(v.begin(), v.end());
        sort(a.begin(), a.end());

        vector<int> ans(n);
        for (int i = 0; i < n; i++)
        {
            auto e = v[i];
            int idx = e.second;
            ans[idx] = a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}