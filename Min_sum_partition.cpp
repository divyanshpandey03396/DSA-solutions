// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int range=accumulate(arr,arr+n,0);
	    int minn=INT_MAX;
	    int dp[n+1][range+1];
	    for (int i=0;i<=n;i++) dp[i][0]=true;
	    for (int j=1;j<=range;j++) dp[0][j]=false;
	    for (int i=1;i<=n;i++)
	    for (int j=1;j<=range;j++){
	        if(arr[i-1]<=j) dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
	        else dp[i][j]=dp[i-1][j];
	    }
	    for(int j=0;j<=range/2;j++){
	        if(dp[n][j]==true) minn=min(minn,range-(2*j));
	    }
	    return minn;
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends