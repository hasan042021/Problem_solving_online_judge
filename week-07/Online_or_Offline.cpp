#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        float on, of;
        cin >> on >> of;
        float on_p = on - (on / 10);
        if (on_p > of)
            cout
                << "DINING" << endl;
        else if (on_p < of)
            cout << "ONLINE" << endl;
        else
            cout << "EITHER" << endl;
    }
    return 0;
}