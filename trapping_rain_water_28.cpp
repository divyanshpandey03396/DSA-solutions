#include <bits/stdc++.h>
using namespace std;



long long trappingWater(int arr[], int n){
        int lmax[n],rmax[n];
        long long res=0;
        lmax[0]=arr[0];
        for(int i=1;i<n;i++){
            lmax[i]=max(arr[i],lmax[i-1]);
        }
        rmax[n-1]=arr[n-1];
        for(int i=n-2;i>=0;i--){
            rmax[i]=max(arr[i],rmax[i+1]);
        }
        for(int i=0;i<n;i++){
            res+=(min(lmax[i],rmax[i])-arr[i]);
        }
        return res;
        
    }