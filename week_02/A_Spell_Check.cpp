#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Timur";
    int freq[60] = {0};
    for (char l : name)
    {
        int d = l - 'A';
        freq[d]++;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int freq_a[60] = {0};
        for (char l : a)
        {
            int d = l - 'A';
            freq_a[d]++;
        }
        bool ok = true;
        for (int i = 0; i < 60; i++)
        {
            if (freq[i] != freq_a[i])
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}