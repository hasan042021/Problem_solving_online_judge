
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        // your code here
        int i = 0, j = 0;
        int frq[26] = {0};
        int unq = 0;
        int mx = 0;
        while (j < s.size())
        {
            frq[s[j] - 'a']++;
            if (frq[s[j] - 'a'] == 1)
            {
                unq++;
            }
            while (unq > k)
            {
                frq[s[i] - 'a']--;

                if (frq[s[i] - 'a'] == 0)
                {
                    unq--;
                }
                i++;
            }
            if (unq == k)
            {
                mx = max(mx, j - i + 1);
            }
            j++;
        }
        if (mx == 0)
            return -1;
        else
            return mx;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
