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
        if (2 * a == b)
            cout << a * 5 << endl;
        else
            cout << (2 * b) + a << endl;
    }
    return 0;
}