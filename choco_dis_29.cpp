#include <bits/stdc++.h>
using namespace std;

    long long findMinDiff(vector<long long> a, long long n, long long m){
       sort(a.begin(),a.end());
       long long ans=a[m-1]-a[0];
       for(int i=m;i<n;++i)
       {
           ans=min(ans,a[i]-a[i-m+1]);
           
       }
    
     return ans;
    
    }   