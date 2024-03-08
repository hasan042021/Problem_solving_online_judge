#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        long long tmp, e_cnt = 0, o_cnt = 0;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            if (tmp % 2 == 0)
            {
                e_cnt++;
                sum += tmp;
            }
            else
            {
                o_cnt++;
                sum += tmp;
            }
        }
        while (q--)
        {
            int type, x;
            cin >> type >> x;
            if (type == 1)
            {
                sum += o_cnt * x;
                if (x & 1)
                {
                    e_cnt += o_cnt;
                    o_cnt = 0;
                }
            }
            else
            {
                sum += e_cnt * x;
                if (x & 1)
                {
                    o_cnt += e_cnt;
                    e_cnt = 0;
                }
            }
            cout << sum << endl;
        }
    }
    return 0;
}