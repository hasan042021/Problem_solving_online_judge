#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n), res(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] >= s)
                res[i] = b[i] - a[i];
            else
                res[i] = b[i] - s;
            s = b[i];
        }
        for (int a : res)
            cout << a << " ";
        cout << endl;
    }
    return 0;
}