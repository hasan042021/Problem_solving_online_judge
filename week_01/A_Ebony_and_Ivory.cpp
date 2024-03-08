#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool found = false;
    for (int i = 0; i <= 10000; i++)
    {
        for (int j = 0; j <= 10000; j++)
        {
            if ((a * i) + (b * j) == c)
            {
                found = true;
                break;
            }
        }
    }
    if (found)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}