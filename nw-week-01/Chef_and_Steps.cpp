#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % k == 0)
                cout << "1";
            else
                cout << "0";
        }
        cout << "\n";
    }
    return 0;
}