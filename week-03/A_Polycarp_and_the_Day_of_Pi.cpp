#include <bits/stdc++.h>
using namespace std;

int main()
{
    string pi = "314159265358979323846264338327";
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        int n = a.size();
        string tmp = pi.substr(0, n);
        int cnt = 0;
        if (a[0] != tmp[0])
            cout << 0 << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] == tmp[i])
                    cnt++;
                else
                    break;
            }
            cout << cnt << endl;
        }
    }
    return 0;
}