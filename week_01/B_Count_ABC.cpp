#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    int seq = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            seq = 1;
        }
        else if (s[i] == 'B')
        {
            if (seq == 1)
                seq++;
            else
                seq = 0;
        }
        else if (s[i] == 'C')
        {
            if (seq == 2)
            {
                cnt++;
                seq = 0;
            }
            else
                seq = 0;
        }
        else
        {
            seq = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}