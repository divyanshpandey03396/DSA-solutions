#include <bits/stdc++.h>
using namespace std;

 int minSwap(int arr[], int n, int k) {
        
        int sub=0;
        int win=0;
         for(int i=0;i<n;++i)
         {
             if(arr[i]<=k)
             win++;
             
         }
         for(int i=0;i<win;++i)
         {
             if(arr[i]>k)
             sub++;
             
         }
         int i=0,j=win;
         int ans=sub;
         while(j<n)
         {
             if(arr[i]>k)
             sub--;
             if(arr[j]>k)
             sub++;
             i++;
             j++;
             ans=min(ans,sub);
         }
       
        return ans;
    }