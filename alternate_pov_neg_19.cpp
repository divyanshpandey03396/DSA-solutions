#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n)
{
    vector<int> neg;
    vector<int> pos;
    // int s=arr.length();
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
            pos.push_back(arr[i]);
        if (arr[i] < 0)
            neg.push_back(arr[i]);
    }
    int i = 0, j = 0, idx = 0;
    while (i < pos.size() && j < neg.size())
    {
        arr[idx] = pos[i];
        i++;
        idx++;
        arr[idx] = neg[j];
        j++;
        idx++;
    }
    while (i < pos.size())
    {
        arr[idx++] = pos[i];
        i++;
    }
    while (j < neg.size())
    {
        arr[idx++] = neg[j];
        j++;
    }
}