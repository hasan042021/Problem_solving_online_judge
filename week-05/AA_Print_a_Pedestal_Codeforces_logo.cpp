#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a, b, c;

        for (int i = 1; i <= n; i++)
        {
            b = i;
            int rem = n - b;

            if (rem % 2 == 0)
            {
                a = 1 + (rem / 2);
            }
            else
            {
                a = (rem + 1) / 2;
            }

            c = n - b - a;

            if (a > 0 && b > 0 && c > 0 && a < b && a > c)
            {
                break;
            }
        }

        cout << a << " " << b << " " << c << endl;
    }
    return 0;
}
