#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    if (sum & 1 == 1)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        vector<int> a;
        ll half = sum / 2;
        ll cur = half;
        int i = n;
        vector<int> f;
        while (cur > i)
        {
            cur -= i;
            f.push_back(i);
            i--;
        }
        cout << f.size() + 1 << endl;
        for (int i : f)
            cout << i << " ";
        cout << cur << endl;
        if (f.size() == 0)
        {
            f.push_back(cur);
            cout << n - 1 << endl;
        }
        else
        {
            cout << n - (f.size() + 1) << endl;
        }
        for (int i = f.back() - 1; i > 0; i--)
        {
            if (i == cur)
                continue;
            else
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}