#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int y = n + 1;
    while (true)
    {
        bool res = true;
        string a = to_string(y);
        string b = a;
        for (int j = 0; j < a.size(); j++)
        {
            for (int k = 0; k < a.size(); k++)
            {
                if (j != k && a[j] == a[k])
                    res = false;
            }
        }
        if (res)
        {
            cout << y << endl;
            break;
        }
        else
        {
            y++;
        }
    }
    return 0;
}