#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int s, o;
        cin >> s >> o;
        if (o * 6 * 6 >= s)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}