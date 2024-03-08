#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n - 1];
    int cnt[n + 1] = {0};
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}