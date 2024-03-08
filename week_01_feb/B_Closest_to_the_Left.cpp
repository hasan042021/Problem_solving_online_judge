#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    while (q--)
    {
        int k;
        cin >> k;
        auto r = upper_bound(arr.begin(), arr.end(), k);
        cout << r - arr.begin() << endl;
    }
    return 0;
}