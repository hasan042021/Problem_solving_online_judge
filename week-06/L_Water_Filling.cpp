#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int r = a + b + c;
        if (r <= 1)
            cout << "Water filling time" << endl;
        else
            cout << "Not now" << endl;
    }
    return 0;
}