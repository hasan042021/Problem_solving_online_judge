#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int pa = 100 - a;
        int pb = 200 - (b * 2);
        if (pa < pb)
            cout << "FIRST" << endl;
        else if (pa > pb)
            cout << "SECOND" << endl;
        else
            cout << "BOTH" << endl;
    }
    return 0;
}