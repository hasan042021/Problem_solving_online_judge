#include <bits/stdc++.h>
using namespace std;
#define ll long

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        set<int> s;
        int visited = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            s.insert(a[i]);
            visited++;
            if (visited > s.size())
            {
                break;
            }
        }

        cout << n - s.size() << endl;
    }
    return 0;
}