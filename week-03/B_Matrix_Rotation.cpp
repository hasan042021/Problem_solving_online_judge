#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[2][2];
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }

        bool found = false;
        for (int i = 0; i < 4; i++)
        {
            if (a[0][0] < a[0][1] && a[0][0] < a[1][0] && a[1][0] < a[1][1] && a[0][1] < a[1][1])
            {
                found = true;
                break;
            }
            else
            {
                swap(a[0][0], a[0][1]);
                swap(a[1][0], a[0][0]);
                swap(a[1][1], a[1][0]);
            }
        }

        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}