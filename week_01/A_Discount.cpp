#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    double d = ((a - b) * 100.0) / a;
    cout << fixed << setprecision(14) << d << endl;
    return 0;
}