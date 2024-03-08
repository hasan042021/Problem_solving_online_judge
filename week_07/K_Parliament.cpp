#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r;
        cin >> n >> r;
        if (n % 2 == 1)
        {
            if (r >= (n / 2) + 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            if (r >= n / 2)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}