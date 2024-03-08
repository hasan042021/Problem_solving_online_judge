#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int sum;
        cin >> sum;
        vector<int> ans;
        for (int i = 9; i >= 0; i--)
        {
            if (sum == 0)
                break;
            if (sum < i)
            {
                ans.push_back(sum);
                break;
            }
            else
            {
                ans.push_back(i);
                sum -= i;
            }
        }
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i];
        }
        cout << endl;
    }
    return 0;
}