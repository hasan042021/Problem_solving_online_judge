#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (x < (-n + 1) || x > n + 1)
            cout << "-1" << endl;
        else if (x == n + 1)
        {
            for (int i = 0; i < n; i++)
                cout << "+";
            cout << endl;
        }
        else if (x == (-n + 1))
        {
            for (int i = 0; i < n; i++)
                cout << "-";
            cout << endl;
        }
        else if (x == 0)
        {
            for (int i = 0; i < n - 1; i++)
                cout << "*";
            cout << "-" << endl;
        }
        else if (x > 0)
        {
            for (int i = 0; i < x - 1; i++)
                cout << "+";
            for (int i = x - 1; i < n; i++)
                cout << "*";
            cout << endl;
        }
        else if (x < 0)
        {
            int d = abs(x);
            for (int i = 0; i <= d; i++)
                cout << "-";
            for (int i = d + 1; i < n; i++)
                cout << "*";
            cout << endl;
        }
    }
    return 0;
}