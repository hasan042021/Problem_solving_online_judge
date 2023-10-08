#include <bits/stdc++.h>
using namespace std;

void prefix_sum(long long pre[], vector<int> a, int sz)
{
    pre[0] = a[0];
    for (int i = 1; i < sz; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }
}

void print_sum(int a, int b, long long pre[])
{
    if (a == 0)
        cout << pre[b] << endl;
    else
    {
        cout << pre[b] - pre[a - 1] << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    long long pre_b[n];
    prefix_sum(pre_b, a, n);

    sort(a.begin(), a.end());

    long long pre_s[n];
    prefix_sum(pre_s, a, n);

    int q;
    cin >> q;
    while (q--)
    {
        int t, a, b;
        cin >> t >> a >> b;
        a--;
        b--;
        if (t == 1)
        {
            print_sum(a, b, pre_b);
        }
        else if (t == 2)
        {
            print_sum(a, b, pre_s);
        }
    }

    return 0;
}