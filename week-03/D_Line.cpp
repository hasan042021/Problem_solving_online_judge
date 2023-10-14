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
        string s;
        cin >> s;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                sum += i;
            else if (s[i] == 'R')
                sum += n - i - 1;
        }
        int mx = sum;
        // int tmp = sum;
        // for (int i = 0; i < n; i++)
        // {
        //     if (s[i] == 'L')
        //     {
        //         tmp -= i;
        //         mx = max(mx, tmp += n - i - 1);
        //     }
        //     else if (s[i] == 'R')
        //     {
        //         tmp -= n - i - 1;
        //         mx = max(mx, tmp += i);
        //     }
        //     cout << mx << " ";
        // }
        cout << endl;
    }
    return 0;
}