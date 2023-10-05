#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int tot = 0;
    while (n--)
    {
        int d;
        cin >> d;
        if (d % k == 0)
            tot++;
    }
    cout << tot << endl;
    return 0;
}