#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int x = s[0] - 'a';
        int y = s[1] - 'a';
        if (x > y)
        {
            cout << x * 25 + y + 1 << endl;
        }
        else
        {
            cout << x * 25 + y << endl;
        }
    }
}