#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int c;
        cin >> c;
        if (c * 4 <= 1000)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}