
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll on = (n / 2) + (n % 2);
        ll x_o = on - k;

        if (n < 2 * k)
            cout << "NO" << endl;
        else if (n == 2 * k)
            cout << "YES" << endl;
        else
        {
            if (x_o % 2 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}