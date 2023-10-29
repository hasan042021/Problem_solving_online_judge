#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    stack<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        st.push(s);
    }
    set<string> ans;
    while (!st.empty())
    {
        if (ans.find(st.top()) == ans.end())
        {
            ans.insert(st.top());
            string s = st.top();
            if (s.size() > 2)
                cout << s.substr(s.size() - 2);
        }
        st.pop();
    }
    return 0;
}