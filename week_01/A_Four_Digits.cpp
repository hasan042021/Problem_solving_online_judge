#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int n;
    cin >> n;
    while (n > 0)
    {
        int d;
        d = n % 10;
        char c = d + '0';
        a += c;
        n /= 10;
    }
    int l = a.size();
    reverse(a.begin(), a.end());
    string newstr = a;
    for (int i = l; i < 4; i++)
    {
        newstr = '0' + newstr;
    }
    cout << newstr << endl;
    return 0;
}