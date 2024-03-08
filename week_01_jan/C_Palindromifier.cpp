#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string s2;
    s2 = s;
    int n = s.length();
    reverse(s2.begin(), s2.end());
    if (s2 == s)
        cout << 0 << endl;
    else
    {
        cout << 3 << endl;
        cout << "R"
             << " " << n - 1 << endl;
        cout << "L"
             << " " << n << endl;
        cout << "L"
             << " " << 2 << endl;
    }
    return 0;
}