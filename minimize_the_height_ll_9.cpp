#include<bits/stdc++.h>
using namespace std;
 int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int ans=arr[n-1]-arr[0];
      
        for(int i=0;i<n;++i)
        {
            int maxi=max(arr[i-1]+k,arr[n-1]-k);
            int mini=min(arr[0]+k,arr[i]-k);
            if(mini<0)
            continue;
            ans=min(ans,maxi-mini);
        }
        return ans;
    }