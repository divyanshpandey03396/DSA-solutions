// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
 bool pal(string &s,int i,int j){
    while(i<j){
     if(s[i]!=s[j])
      return false;
     i++;
     j--;
    }
    return true;
   }
   int solve(string s,int i,int j,vector<vector<int>>&dp){
       if(i>j) return 0;
       if(dp[i][j]!=-1) return dp[i][j];
       if(pal(s,i,j)==true) return 0;
       int ans=INT_MAX;
       int left,right;
       for(int k=i;k<j;k++){
            if(dp[i][k]!=-1)
      left=dp[i][k];
     else
      left=solve(s,i,k,dp);
     if(dp[k+1][j]!=-1)
      right=dp[k+1][j];
     else
      right=solve(s,k+1,j,dp);
     int temp=1+left+right;
           ans=min(ans,temp);
       }
       return dp[i][j]=ans;
   }
    int palindromicPartition(string str)
    {
        // code here
        int n=str.length();
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return solve(str,0,n-1,dp);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends