#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int i = 0, j = 0;
    vector<int> res;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            res.push_back(a[i]);
            i++;
        }
        else if (a[i] > b[j])
        {
            res.push_back(b[j]);
            j++;
        }
        else if (a[i] == b[j])
        {
            res.push_back(a[i]);
            res.push_back(a[i]);
            i++;
            j++;
        }
    }
    while (i < n)
    {
        res.push_back(a[i]);
        i++;
    }
    while (j < m)
    {
        res.push_back(b[j]);
        j++;
    }
    for (int i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}