#include <bits/stdc++.h>
using namespace std;

void initial_poisition(int e, int n_m, string op)
{
    int pos = e;
    // cout << pos << " ";
    for (int i = 0; i < n_m; i++)
    {
        if (op[i] == 'D')
        {
            if (pos == 9)
            {
                pos = 0;
            }
            else
            {
                pos++;
            }
        }
        else if (op[i] == 'U')
        {
            if (pos == 0)
            {
                pos = 9;
            }
            else
            {
                pos--;
            }
        }
    }
    cout << pos << " ";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            int n_m;
            cin >> n_m;
            string op;
            cin >> op;
            initial_poisition(a[i], n_m, op);
        }
        cout << endl;
    }
    return 0;
}