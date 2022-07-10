// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
     string find(string a,string b)
   {
       string ans="";
       for(int i=0;i<min(a.length(),b.length());i++)
       {
           if(a[i]==b[i])
           {
               ans=ans+a[i];
           }
           else
           {
               break;
           }
       }
   return ans;
       
   }
 public:
   
   string longestCommonPrefix (string arr[], int N)
   {
        string res=arr[0];
        for(int i=1;i<N;i++)
        {
           res=find(res,arr[i]);
        }
        return (res!="") ? res : "-1";
       
   }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends