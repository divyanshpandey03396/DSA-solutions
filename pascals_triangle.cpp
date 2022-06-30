class Solution {
public:
   
    int ncr(int n,int r,vector<vector<int>>&dp){
        if(r==0 || r==n)
            return dp[n][r]=1;
        if(dp[n][r]!=-1) return dp[n][r];
        else
            return dp[n][r]=(ncr(n-1,r-1,dp)+ncr(n-1,r,dp));
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
         vector<vector<int>>dp(31,vector<int>(31,-1));
        for (int i=0;i<numRows;i++){
            vector<int>temp;
            for(int j=0;j<=i;j++){
                int val=ncr(i,j,dp);
                temp.push_back(val);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};