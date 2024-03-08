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
        if (n >= 1 && n <= 15)
        {
            if (n >= 11 && n <= 15)
                cout << "Lower Single" << endl;
            else
                cout << "Lower Double" << endl;
        }
        else
        {
            if (n >= 26 && n <= 30)
                cout << "Upper Single" << endl;
            else
                cout << "Upper Double" << endl;
        }
    }
    return 0;
}