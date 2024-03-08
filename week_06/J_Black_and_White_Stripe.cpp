#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n < 2)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < k; i++)
        {
            if (s[i] == 'W')
                cnt++;
        }
        int ans = cnt;
        for (int i = k; i < n; i++)
        {
            if (s[i] == 'W')
                cnt++;
            if (s[i - k] == 'W')
                cnt--;
            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }
}
