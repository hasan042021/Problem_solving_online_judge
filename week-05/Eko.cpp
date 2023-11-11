#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, result = 0;
    cin >> n >> m;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int low = 0, high = *max_element(a.begin(), a.end()), mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > mid)
            {
                sum += a[i] - mid;
            }
        }

        if (sum >= m)
        {
            result = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << result;

    return 0;
}