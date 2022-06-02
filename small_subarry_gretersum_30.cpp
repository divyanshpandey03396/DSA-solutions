#include <bits/stdc++.h>
using namespace std;

 int smallestSubWithSum(int arr[], int n, int x)
    {
       int len=INT_MAX;
       int sum=0;
       int i=0,j=0;
       while(i<=j && j<n)
       {
           while(sum<=x && j<n)
           {
               sum+=arr[j++];
           }
           while(sum>x && i<j)
           {
               len=min(len,j-i);
               sum-=arr[i++];
           }
       }
      
       return len;
    }