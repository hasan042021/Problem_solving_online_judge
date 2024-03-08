#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;
    long long cnt = 0;
    long long i = y;
    while (i >= x)
    {
        i /= 2;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}