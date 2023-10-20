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
        for (int i = 0; i < n; i++)
        {
            if (s[i] <= 90)
                s[i] += 32;
        }
        string cs = "";
        for (int i = 0; i < n; i++)
        {
            if (cs.empty() || cs.back() != s[i])
            {
                cs.push_back(s[i]);
            }
        }
        if (cs == "meow")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
