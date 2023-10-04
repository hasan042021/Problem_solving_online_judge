#include <bits/stdc++.h>
using namespace std;

void take_input(vector<string> &v, int n, map<string, int> &words)
{
    for (int j = 0; j < n; j++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        words[s]++;
    }
}

void set_points(map<string, int> &words, map<string, int> &points)
{
    for (auto p : words)
    {
        if (p.second == 1)
        {
            points[p.first] = 3;
        }
        else if (p.second == 2)
        {
            points[p.first] = 1;
        }
        else
        {
            points[p.first] = 0;
        }
    }
}

int count_points(map<string, int> points, vector<string> v)
{
    int cnt = 0;
    for (string s : v)
    {
        cnt += points[s];
    }
    return cnt;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v1, v2, v3;
        map<string, int> words;

        take_input(v1, n, words);
        take_input(v2, n, words);
        take_input(v3, n, words);

        map<string, int> points;
        set_points(words, points);

        cout << count_points(points, v1) << " " << count_points(points, v2) << " " << count_points(points, v3) << endl;
    }
    return 0;
}