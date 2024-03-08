#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 4 == 1 || i % 4 == 2)
            cout << "a";
        else if (i % 4 == 3 || i % 4 == 4)
            cout << "b";
    }
    return 0;
}