#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b;
    cin >> n >> b;
    int cnt = 0;
    while (true)
    {
        if (n / b == 0)
        {
            cnt++;
            break;
        }
        else
        {
            cnt++;
            n = n / b;
        }
    }
    cout << cnt << endl;
    return 0;
}