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
        string s;
        cin >> s;
        int freq[26] = {0};
        for (int i = 0; i < n; i++)
        {
            freq[s[i] - 'a']++;
        }
        int o = 0, e = 0;
        vector<int> res;
        for (int i = 0; i < 26; i++)
        {
            if ((freq[i] & 1) == 1)
            {
                res.push_back(freq[i]);
                o++;
            }
            else if (freq[i] > 0)
                e++;
        }
        // cout << o << " " << e << " ";
        if (o == 0)
            cout << 1 << endl;
        else if (o > 1)
            cout << 0 << endl;
        else if (o == 1)
        {
            int d = res[0];
            if ((d > 1) && (e == 0))
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}