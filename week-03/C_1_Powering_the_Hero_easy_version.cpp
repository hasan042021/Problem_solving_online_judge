#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        priority_queue<int> pq;
        long long tot = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > 0)
                pq.push(a);
            else
            {
                if (!pq.empty())
                {
                    tot += pq.top();
                    pq.pop();
                }
            }
        }
        cout << tot << endl;
    }
    return 0;
}