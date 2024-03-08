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
        string a;
        cin >> a;
        map<string, int> mp;
        for (int i = 1; i < n; i++)
        {
            string b;
            b += a[i - 1];
            b += a[i];
            mp[b]++;
        }
        cout << mp.size() << endl;
    }
    return 0;
}