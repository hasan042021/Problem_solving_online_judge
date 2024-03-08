#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int sum_A = a + (a - 1);
    int sum_B = b + (b - 1);
    if (a == b)
        cout << a + b << endl;
    else
        cout << max(sum_A, sum_B) << endl;
    return 0;
}