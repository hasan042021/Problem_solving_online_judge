#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a[26] = {0};
    for (char c : s)
    {
        int d = c - 'a';
        a[d] = 1;
    }
    int cnt = 0;
    for (int i = 0; i < 26; i++)
    {
        if (a[i])
            cnt++;
    }
    if (cnt == 26)
        cout << "None" << endl;
    else
    {
        for (int i = 0; i < 26; i++)
        {
            if (!a[i])
            {
                char c = i + 'a';
                cout << c << endl;
                break;
            }
        }
    }
    return 0;
}