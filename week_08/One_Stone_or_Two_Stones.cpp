#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            if ((a & 1) == 1)
                cout << "CHEF" << endl;
            else
                cout << "CHEFINA" << endl;
            continue;
        }
        if (abs(a - b) >= 2)
        {
            if (a > b)
                cout << "CHEF" << endl;
            else
                cout << "CHEFINA" << endl;
            continue;
        }
        else
        {
            if (a > b)
            {
                if ((a & 1) == 1)
                    cout << "CHEFINA" << endl;
                else
                    cout << "CHEF" << endl;
                continue;
            }

            if (b > a)
            {
                if ((b & 1) == 1)
                    cout << "CHEFINA" << endl;
                else
                    cout << "CHEF" << endl;
                continue;
            }
        }
    }
    return 0;
}