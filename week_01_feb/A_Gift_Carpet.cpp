#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<int> V, I, K, A;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                char a;
                cin >> a;
                if (a == 'v')
                    V.push_back(j);
                else if (a == 'i')
                    I.push_back(j);
                else if (a == 'k')
                    K.push_back(j);
                else if (a == 'a')
                    A.push_back(j);
            }
        }
        if (V.size() == 0 || I.size() == 0 || K.size() == 0 || A.size() == 0)
            cout << "NO" << endl;
        else
        {
            sort(V.begin(), V.end());
            sort(I.begin(), I.end());
            sort(K.begin(), K.end());
            sort(A.begin(), A.end());
            int p_v = V[0], p_i = I[0], p_k = K[0], p_a = A[0];
            for (int i = 0; i < I.size(); i++)
            {
                if (p_i > p_v)
                    break;
                else
                    p_i = I[i];
            }
            for (int i = 0; i < K.size(); i++)
            {
                if (p_k > p_i)
                    break;
                else
                    p_k = K[i];
            }
            for (int i = 0; i < A.size(); i++)
            {
                if (p_a > p_k)
                    break;
                else
                    p_a = A[i];
            }
            if (p_v < p_i && p_i < p_k && p_k < p_a)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}