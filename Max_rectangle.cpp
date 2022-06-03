// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
    int findLargestHistogramArea(vector<int>& heights,int n){
        stack<int>stk;
        int maxArea{};
        
        for(int i=0;i<=n;i++){
            while(!stk.empty() and (i==n or heights[stk.top()]>=heights[i])){
                int height=heights[stk.top()];
                stk.pop();
                
                int width = (stk.empty())?i:i-stk.top()-1;
                maxArea=max(maxArea,height*width);
            }
            stk.push(i);
        }
        return maxArea;
    }
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        vector<int> dp(m,0);
        
        int maxArea{};
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(M[i][j]) dp[j]++;
                else dp[j]=0;
            }
            maxArea = max(maxArea, findLargestHistogramArea(dp,m));
        }
        return maxArea;
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends