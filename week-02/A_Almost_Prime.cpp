#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    if (num == 2)
    {
        return true;
    }
    if (num % 2 == 0)
    {
        return false;
    }
    for (int i = 3; i <= sqrt(num); i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int d = i;
        int divisor = 2;
        int n = 0;
        vector<int> divisors;
        while (d > 1 || divisor <= d)
        {
            if (d % divisor == 0)
            {
                d = d / divisor;
                n++;
                divisors.push_back(divisor);
                divisor = 2;
            }
            else
                divisor++;
        }
        // for (int d : divisors)
        // {
        //     cout << d << " ";
        // }
        cout << endl;
        map<int, int> cnt;
        for (int j = 0; j < divisors.size(); j++)
        {
            cnt[divisors[i]]++;
        }
        int n_d = 0;
        for (int j = 0; j < sizeof(freq); j++)
        {
            cout << freq[j] << " ";
            // if (freq[i] > 0)
            //     n_d++;
        }
        cout << endl;
        // if (n == 2 && isPrime(divisors[0]) && isPrime(divisors[1]) && (divisors[0] != divisors[1]))
        // {
        //     cnt++;
        // }
        if (n_d == 2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}