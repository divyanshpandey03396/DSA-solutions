#include <bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &p)
{
    int minsfar = p[0];
    int maxprof = 0;
    int prof = 0;
    for (int i = 0; i < p.size(); ++i)
    {
        minsfar = min(minsfar, p[i]);
        prof = p[i] - minsfar;
        maxprof = max(maxprof, prof);
    }

    return maxprof;
}