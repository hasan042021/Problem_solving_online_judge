#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                int gcd_ij = gcd(i, j);
                int gcd_ijk = gcd(gcd_ij, k);
                sum += gcd_ijk;
            }
        }
    }
    cout << sum << endl;
    return 0;
}