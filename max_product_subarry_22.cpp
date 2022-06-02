#include <bits/stdc++.h>
using namespace std;


long long maxProduct(vector<int> arr, int n) {
	    long long ma=arr[0],mi=arr[0];
	    long long ans=arr[0];
	    for(int i=1;i<n;++i)
	    {
	        if(arr[i]<0) swap(ma,mi);
	        ma=max(1ll*arr[i],ma*arr[i]);
	        mi=min(1ll*arr[i],mi*arr[i]);
	        ans=max(ans,ma);
	    }
	    return ans;
	}