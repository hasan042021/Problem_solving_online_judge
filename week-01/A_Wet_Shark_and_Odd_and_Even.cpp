#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long sum = 0;
    vector<int> odds;
    int n_odds = 0;
    int mn = INT_MAX;
    bool mn_taken = false;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            sum += a[i];
        else if (a[i] % 2 == 1)
        {
            odds.push_back(a[i]);
            mn = min(a[i], mn);
            n_odds++;
        }
    }
    if (n_odds % 2 == 0)
    {
        for (int d : odds)
        {
            sum += d;
        }
    }
    else
    {
        for (int d : odds)
        {
            if (d == mn && !mn_taken)
            {
                mn_taken = true;
                continue;
            }
            sum += d;
        }
    }
    cout << sum << endl;
    return 0;
}
