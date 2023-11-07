#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int s = accumulate(a.begin(), a.end(), 0);
        int m = n, c_s = 0, c_n = 0;

        for (int i = 0; i < n; i++)
        {
            c_s += a[i];
            c_n++;
            int m_x = 0;

            if (s % c_s == 0)
            {
                m_x = c_n;
                int t_s = 0, t_n = 0;

                for (int j = i + 1; j < n; j++)
                {
                    t_s += a[j];
                    t_n++;

                    if (t_s == c_s)
                    {
                        m_x = max(m_x, t_n);
                        t_s = 0;
                        t_n = 0;
                    }
                }

                if (t_s == 0)
                {
                    m = min(m, m_x);
                }
            }
        }

        cout << m << endl;
    }
    return 0;
}
