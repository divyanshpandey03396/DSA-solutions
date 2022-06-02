#include <bits/stdc++.h>
using namespace std; int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> m;
        int p=0;
        for(int i=0;i<n;++i)
        {
           int val=k-arr[i];
           if(m[val])
           p+=m[val];
           
           m[arr[i]]++;
        }
        return p;
    }