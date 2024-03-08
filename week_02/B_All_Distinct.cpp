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
        map<int, int> freq;
        vector<int> res;
        int cnt_dup = 0;
        for (int i = 0; i < n; i++)
        {
            int d;
            cin >> d;
            freq[d]++;
            if (freq[d] == 1)
                res.push_back(d);
            else if (freq[d] > 1)
            {
                cnt_dup++;
            }
        }
        if (cnt_dup % 2 == 0)
            cout << res.size() << endl;
        else
        {
            cout << res.size() - 1 << endl;
        }
    }
    return 0;
}