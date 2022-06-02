#include<bits/stdc++.h>
using namespace std;
long long maxSubarraySum(int arr[], int n){
        
     long long csum=0,msum=arr[0];
     for(int i=0;i<n;++i)
     {
         csum+=arr[i];
         if(csum>msum)
         msum=csum;
         if(csum<0)
         csum=0;
     }
       return msum; 
    }

    //kadane's Alogorithm