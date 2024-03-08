#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int i = 0, j = 0, sum = 0, cnt = 0;
    while (j < n)
    {
        sum += a[j];
        if (sum == x)
        {
            cnt++;
        }
        while (sum > x)
        {
            sum -= a[i];
            i++;
            if (sum == x)
            {
                cnt++;
            }
        }

        j++;
    }
    cout << cnt << endl;
    return 0;
}