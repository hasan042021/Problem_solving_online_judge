#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int freq[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i] - 'A']++;
    }
    int o = 0, e = 0;
    vector<int> res;

    for (int i = 0; i < 26; i++)
    {
        if ((freq[i] & 1) == 1)
        {
            o++;
        }
    }

    if (o > 1)
        cout << "NO SOLUTION" << endl;
    else
    {
        vector<char> front, back, odd;
        for (int i = 0; i < 26; i++)
        {
            if ((freq[i] & 1) == 1)
            {
                char c = i + 'A';
                for (int j = 0; j < freq[i]; j++)
                    odd.push_back(c);
            }
            else
            {
                char c = i + 'A';
                for (int j = 0; j < (freq[i] / 2); j++)
                    front.push_back(c);
                for (int j = 0; j < (freq[i] / 2); j++)
                    back.push_back(c);
            }
        }
        // cout << front.size() << " " << odd.size() << " " << back.size() << endl;
        reverse(back.begin(), back.end());
        for (char i : front)
            cout << i;
        for (char i : odd)
            cout << i;
        for (char i : back)
            cout << i;
        cout << endl;
    }

    return 0;
}