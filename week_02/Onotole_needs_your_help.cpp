#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        freq[a]++;
    }
    for (auto e : freq)
    {
        if (e.second == 1)
        {
            cout << e.first << endl;
            break;
        }
    }
    return 0;
}