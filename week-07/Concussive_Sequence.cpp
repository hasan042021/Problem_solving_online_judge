#include <bits/stdc++.h>
using namespace std;

bool is_concussive(const vector<int> &arr)
{
    for (int i = 1; i < arr.size() - 1; ++i)
    {
        if ((arr[i - 1] < arr[i]) != (arr[i] > arr[i + 1]))
        {
            return false;
        }
    }
    return true;
}

vector<int> rearrange_concussive(vector<int> &arr)
{
    for (int i = 1; i < arr.size() - 1; i += 2)
    {
        if (arr[i] == arr[i - 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    return arr;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> A(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
        }

        A = rearrange_concussive(A);
        for (const int &element : A)
        {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}