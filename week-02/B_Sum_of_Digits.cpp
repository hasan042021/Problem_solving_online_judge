#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 10)
        cout << 0 << endl;
    else
    {

        vector<int> digits;
        int cnt = 0;
        long long sum = 0;
        while (n > 0)
        {
            int d = n % 10;
            digits.push_back(d);
            n = n / 10;
        }
        for (int d : digits)
        {
            sum += d;
        }

        while (digits.size() > 1)
        {
            digits.clear();
            long long m = sum;
            while (m > 0)
            {
                int d = m % 10;
                digits.push_back(d);
                m = m / 10;
            }
            int s = 0;
            for (int d : digits)
            {
                s += d;
            }
            sum = s;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}

// int main()
// {
//     string n;
//     cin >> n;

//     int cnt = 0;
//     while (n.size() > 1)
//     {
//         int sum = 0;
//         for (char digit : n)
//         {
//             sum += digit - '0';
//         }
//         n = to_string(sum);
//         cnt++;
//     }

//     cout << cnt << endl;

//     return 0;
// }
