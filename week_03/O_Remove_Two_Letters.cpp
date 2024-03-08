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
        vector<string> ans;
        for (int i = 0; i < n - 1; i++)
        {
            string ss = s.substr(i, 2);
            string b;
            if (!ans.empty())
                b = ans.back();
            reverse(b.begin(), b.end());
            if (ans.empty() || ((ans.back() != ss) && b != ss))
            {
                ans.push_back(ss);
            }
        }
        cout << ans.size() << endl;
    }
    return 0;
}
