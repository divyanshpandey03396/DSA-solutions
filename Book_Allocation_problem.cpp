// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    //Function to find minimum number of pages.
    bool isPossible(int A[],int m,int M,int n){
        int c=1,sum=0;
        for(int i=0;i<n;i++){
            if(sum+A[i]<=m)
            sum+=A[i];
            else{
                c++;
                sum=A[i];
            }
        }
        return c<=M;
    }
    int findPages(int A[], int N, int M) 
    {
        //code here
        int l=*max_element(A,A+N);
        int r=accumulate(A,A+N,0);
        while(l<=r){
            int m=l+(r-l)/2;
            if(isPossible(A,m,M,N))
            r=m-1;
            else
            l=m+1;
        }
        return r+1;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends