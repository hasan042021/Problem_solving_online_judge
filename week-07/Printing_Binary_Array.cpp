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
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int sc = 0, f_d = a[0];
        for (int i = 0; i < n - 1; i++)
        {
            if (i + 1 < n && a[i] != a[i + 1])
                sc++;
        }
        int cnt = 0;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                a[i] == 0 ? res.push_back(1) : res.push_back(0);
            }
            else
            {
                int l_d = res.back();
                if (cnt < sc)
                {
                    cnt++;
                    l_d == 0 ? res.push_back(1) : res.push_back(0);
                }
                else
                {
                    res.push_back(l_d);
                }
            }
        }
        for (int e : res)
        {
            cout << e << " ";
        }
        cout << endl;
    }
    return 0;
}