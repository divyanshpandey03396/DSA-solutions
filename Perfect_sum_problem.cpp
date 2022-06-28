// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int perfectSum(int arr[], int n, int sum)
	{
       int m=1e9+7;
        int s=accumulate(arr,arr+n,0);
       if(s<sum)return 0;
       vector<vector<int>>t(n+1,vector<int>(sum+1,0));
        for(int i=0;i<n+1;i++){t[i][0]=1;}
        
        for(int i=1;i<n+1;i++)
        for(int j=0;j<sum+1;j++)
        {
            if(arr[i-1]<=j)
            {
                t[i][j]=(t[i-1][j-arr[i-1]]%m+t[i-1][j]%m)%m;
            }
            else
            t[i][j]=t[i-1][j]%m;
        }
        return t[n][sum];
	}
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends