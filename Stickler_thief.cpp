#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int findMax(int arr[], int n, int i,vector<int> &vec)
   {
       if(i>=n)
       {
           return 0;
       }
       if(vec[i])
       {
           return vec[i];
       }
       return vec[i] = max(arr[i]+findMax(arr, n, i+2, vec), findMax(arr, n, i+1, vec));
   }
   int FindMaxSum(int arr[], int n)
   {
      vector<int> vec(n,0);
      return findMax(arr, n, 0, vec);
   }
};

// { Driver Code Starts.
int main()
{
    //taking total testcases
	int t;
	cin>>t;
	while(t--)
	{
	    //taking number of houses
		int n;
		cin>>n;
		int a[n];
		
		//inserting money of each house in the array
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;
		//calling function FindMaxSum()
		cout<<ob.FindMaxSum(a,n)<<endl;
	}
	return 0;
}