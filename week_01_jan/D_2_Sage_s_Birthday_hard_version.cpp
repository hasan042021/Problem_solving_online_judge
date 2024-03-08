#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int mid = n / 2;
    int b[mid], c[mid + 1];
    sort(a, a + n);

    for (int i = 0; i < mid; i++)
    {
        b[i] = a[i];
    }
    for (int i = mid; i < n; i++)
        c[i - mid] = a[i];

    int final[n];
    int j = 0;
    for (int i = 0; i <= mid; i++, j += 2)
    {
        final[j] = c[i];
    }
    j = 1;
    for (int i = 0; i < mid; i++, j += 2)
    {
        final[j] = b[i];
    }

    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (final[i - 1] > final[i] && final[i + 1] > final[i])
            cnt++;
    }
    cout << cnt << endl;
    for (int i = 0; i < n; i++)
        cout << final[i] << " ";

    return 0;
}