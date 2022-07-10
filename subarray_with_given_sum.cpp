// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
       vector <int> ans;
       int curr=arr[0];
       int i=0,j=0;
       while(i<n)
       {
           if(curr==s)
           {
               ans.push_back(i+1);
               ans.push_back(j+1);
               return ans;
           }
         else if(curr<s && j<n)
          {
              j++;
               curr=curr+arr[j];
          }
          else{
              i++;
              curr=arr[i];
             j=i;
          }
         
       }
       ans.push_back(-1);
       return ans;
   }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends