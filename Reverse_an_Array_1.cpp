#include <bits/stdc++.h>
using namespace std;

int main() {
		int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;++i)
	    {
	        cin>>a[i];
	    }
	    int l=0,hi=n-1;
	    while(l<hi)
	    {
	        swap(a[l++],a[hi--]);
	    }
	}
	return 0;
}