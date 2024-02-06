#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int q;
    cin >> q;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        auto lb = lower_bound(a, a + n, l);
        auto ub = upper_bound(a, a + n, r);
        cout << ub - lb << " ";
    }
    return 0;
}