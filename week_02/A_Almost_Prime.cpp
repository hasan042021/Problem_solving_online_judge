#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;
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
        cout << endl;
        map<int, int> cnt;
        for (int j = 0; j < divisors.size(); j++)
        {
            cnt[divisors[j]]++;
        }
        int n_d = 0;
        for (auto e : cnt)
        {
            if (e.second > 0)
                n_d++;
        }

        if (n_d == 2)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}