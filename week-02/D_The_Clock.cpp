#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        int b;
        cin >> a >> b;
        int n = 1440 / b;
        int cnt = 0;
        string cur_time = a;

        for (int i = 0; i < n; i++)
        {
            // extract time;
            int cur_hr = (cur_time[0] - '0') * 10 + (cur_time[1] - '0');
            int cur_min = (cur_time[3] - '0') * 10 + (cur_time[4] - '0');

            // increased amount
            int add_hr = b / 60;
            int add_min = b % 60;

            // increased time
            cur_hr += add_hr;
            cur_min += add_min;

            if (cur_hr >= 24)
            {
                cur_hr -= 24;
            }

            // check minute for conversion
            if (cur_min >= 60)
            {
                cur_min %= 60;
                cur_hr++;
            }

            if (cur_hr >= 24)
            {
                cur_hr -= 24;
            }

            string hr_str, min_str;
            if (cur_hr < 10)
                hr_str = '0' + to_string(cur_hr);
            else
                hr_str = to_string(cur_hr);
            if (cur_min < 10)
                min_str = '0' + to_string(cur_min);
            else
                min_str = to_string(cur_min);

            string newTime = hr_str + ':' + min_str;
            string cpy_time = newTime;
            reverse(cpy_time.begin(), cpy_time.end());

            if (newTime == cpy_time)
            {
                cnt++;
                // cout << "found at " << i << " " << newTime << endl;
            }

            cur_time = newTime;
        }

        cout << cnt << endl;
    }
    return 0;
}