#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        long long tot = (n * (n + 1)) / 2;
        if (tot > k)
            cout << -1 << endl;
        else
        {
            for (int i = 0; i < n - 1; i++)
                cout << 1 << " ";
            k = k - (tot - 1);
            cout << k << endl;
        }
    }
    return 0;
}