int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int i = 0, j = 0, mx = 0;
    long long sum = 0;
    while (j < a.size())
    {
        sum += a[j];
        while (sum > k)
        {
            sum -= a[i];
            i++;
        }
        if (sum == k)
        {
            mx = max(mx, j - i + 1);
        }
        j++;
    }
    return mx;
}
