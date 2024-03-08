#include <bits/stdc++.h>
using namespace std;

const int N = 1e6;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else if (n < N)
        {

            cout << 1 << " " << n - 1 << " " << 1 << endl;
        }
        else
        {
            if (n % N == 0)
            {
                cout << N << " " << (n / N) - 1 << " " << N << endl;
            }
            else
            {
                cout << N << " " << n / N << " " << n % N << endl;
            }
        }
    }
    return 0;
}
