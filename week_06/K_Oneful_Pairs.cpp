#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int res = a + b + (a * b);
    if (res == 111)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}