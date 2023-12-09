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
        int zeros = 0, ones = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                zeros++;
            else
                ones++;
        }
        // cout << zeros << " " << ones << " ";
        if (zeros == ones)
        {
            if (zeros % 2 == 0)
                cout << "Ramos" << endl;
            else
                cout << "Zlatan" << endl;
        }
        else if (zeros > ones)
        {
            if (ones % 2 == 0)
                cout << "Ramos" << endl;
            else
                cout << "Zlatan" << endl;
        }
        else
        {
            if (zeros % 2 == 0)
                cout << "Ramos" << endl;
            else
                cout << "Zlatan" << endl;
        }
    }
}