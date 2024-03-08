#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool res = (a * a) + (b * b) < (c * c);
    if (res)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}