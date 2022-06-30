// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    
   int longestCommonSubstr (string s1, string s2, int m, int n)
    {
        // your code here
    int maxx=INT_MIN;
    int tab[m+1][n+1];
    
    for(int i=0;i<=m;i++)
    tab[i][0]=0;
    
    
    for(int j=0;j<=n;j++)
    tab[0][j]=0;
    
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(s1[i-1]==s2[j-1])
            tab[i][j]=1+tab[i-1][j-1];
            else tab[i][j]=0;
            maxx=max(maxx,tab[i][j]);
        }
    }
    
    return maxx;
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends