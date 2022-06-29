// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	     vector<int>dp(V+1,0);
	    dp[0]=0; 
	    for(int n=1;n<=V;n++){
	        dp[n]=INT_MAX;              
	        for(int i=0;i<M;i++){
	            if(n-coins[i]>=0){
	                int sun=dp[n-coins[i]];
	                if(sun!=INT_MAX)
	                dp[n]=min(dp[n],1+sun);
	            }
	        }
	   
	    }
	    if(dp[V]!=INT_MAX){
	        return dp[V];
	    }else{
	        return -1;
	    }
	}
	  
};

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends