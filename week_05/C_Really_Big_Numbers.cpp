#include <bits/stdc++.h>

using namespace std;

int countBigNums(int n, int s)
{
    long long l = 1, r = n;
    long long res = 0;

    while (l <= r)
    {
        long long m = (l + r) / 2;
        long long sum = 0;
        long long num = m;

        while (num > 0)
        {
            sum += num % 10;
            num /= 10;
        }

        if (m - sum >= s)
        {
            res = n - m + 1;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    return res;
}

int main()
{
    int n, s;
    cin >> n >> s;

    int res = countBigNums(n, s);

    cout << res << endl;

    return 0;
}