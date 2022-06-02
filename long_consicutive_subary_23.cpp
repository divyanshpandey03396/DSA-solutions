#include <bits/stdc++.h>
using namespace std;

int findLongestConseqSubseq(int arr[], int N)
{
    unordered_set<int> s(arr, arr + N);
    int ans = 0;
    for (int i = 0; i < N; ++i)
    {
        if (s.find(arr[i] - 1) == s.end())
        {
            int num = arr[i];
            int clen = 1;

            while (s.find(num + 1) != s.end())
            {
                num++;
                clen++;
            }
            ans = max(ans, clen);
        }
    }
    return ans;
}