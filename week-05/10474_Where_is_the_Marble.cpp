#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cn = 1;

    while (true)
    {
        int N, Q;
        cin >> N >> Q;

        if (N == 0 && Q == 0)
        {
            break;
        }

        vector<int> m(N);

        for (int i = 0; i < N; i++)
        {
            cin >> m[i];
        }

        sort(m.begin(), m.end());

        cout << "CASE# " << cn << ":" << endl;

        for (int i = 0; i < Q; i++)
        {
            int q;
            cin >> q;

            int p = lower_bound(m.begin(), m.end(), q) - m.begin();

            if (p < N && m[p] == q)
            {
                cout << q << " found at " << p + 1 << endl;
            }
            else
            {
                cout << q << " not found" << endl;
            }
        }

        cn++;
    }

    return 0;
}
