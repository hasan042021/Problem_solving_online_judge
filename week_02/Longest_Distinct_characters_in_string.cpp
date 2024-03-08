#include <bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars(string S);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;

        cout << longestSubstrDistinctChars(S) << endl;
    }
}

int longestSubstrDistinctChars(string S)
{
    // your code here
    int i = 0, j = 0;
    int freq[26] = {0};
    int unq = 0;
    int mx = 0;
    map<int, int> mp;
    while (j < S.size())
    {
        freq[S[j] - 'a']++;
        if (freq[S[j] - 'a'] == 1)
        {
            unq++;
            mx = max(mx, j - i + 1);
        }
        if (freq[S[j] - 'a'] > 1)
        {
            mx = max(mx, j - i);
            unq = 1;
            while (i <= mp[S[j]])
            {
                freq[S[i] - 'a']--;
                i++;
            }
        }
        mp[S[j]] = j;
        j++;
    }
    return mx;
}