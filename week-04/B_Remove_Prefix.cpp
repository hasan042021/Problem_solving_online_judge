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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        set<int> s;
        int visited = 0;
        for (int i = 0; i < n; i++)
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