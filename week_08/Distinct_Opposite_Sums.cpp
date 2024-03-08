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
        int mid = n / 2;

        while (mid > 0)
        {
            cout << mid << " ";
            mid--;
        }
        for (int i = (n / 2) + 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
    }
    return 0;
}