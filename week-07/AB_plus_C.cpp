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
            cout << -1 << endl;
        if (n <= N)
        {
            int a, b, c;
            if (n % 2 == 1)
            {
                a = 2;
                b = n / 2;
                c = 1;
            }
            else
            {
                int a = 2;
                int b = (n - 2) / 2;
                int c = 2;
            }
            cout << a << b << c << endl;
        }
        else
        {
            int a, b, c;
            if (n % N == 0)
            {
                a = N;
                b = n / N;
                c = n - (N2 * N);
            }
            else
            {
                a = N;
                b = n / N;
                c = n % N;
            }
        }
    }
    return 0;
}
