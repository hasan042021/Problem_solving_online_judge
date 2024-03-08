#include <bits/stdc++.h>
using namespace std;

int ub(vector<int> &v, int tgt)
{
    int lo = 0, hi = v.size() - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] <= tgt)
            lo = mid + 1;
        else if (v[mid] > tgt)
            hi = mid - 1;
    }
    if (lo >= v.size())
        return -1;
    return v[lo];
}

int lb(vector<int> &v, int tgt)
{
    int lo = 0, hi = v.size() - 1;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (v[mid] < tgt)
            lo = mid + 1;
        else if (v[mid] >= tgt)
            hi = mid - 1;
    }
    if (hi < 0)
        return -1;
    return v[hi];
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int q;
    cin >> q;
    while (q--)
    {
        int tgt;
        cin >> tgt;
        int first = lb(arr, tgt);
        int second = ub(arr, tgt);

        if (first == -1)
            cout << "X";
        else
            cout << first;
        if (second == -1)
            cout << " X" << endl;
        else
            cout << " " << second << endl;
    }

    return 0;
}
