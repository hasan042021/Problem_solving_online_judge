#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int frq[130] = {0};
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            char l = s[i];
            if (l <= 90)
            {
                if (frq[l + 32] > 0)
                {
                    frq[l + 32]--;
                    cnt++;
                }
                else
                    frq[l]++;
            }
            else
            {
                if (frq[l - 32] > 0)
                {
                    frq[l - 32]--;
                    cnt++;
                }
                else
                    frq[l]++;
            }
        }

        for (int i = 0; i < 130; i++)
        {
            if (frq[i] > 1)
            {
                while (frq[i] > 1)
                {
                    if (k == 0)
                        break;
                    cnt++;
                    k--;
                    frq[i] -= 2;
                }
            }
        }

        cout << cnt << endl;
    }
    return 0;
}