// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
     int kadanes(int arr[],int n)
   {
       int currSum = 0;
       int maxSum = INT_MIN;
       for(int i=0;i<n;i++)
       {
           currSum = max(arr[i] + currSum, arr[i]);
           maxSum = max(maxSum,currSum);
       }
       return maxSum;
   }
   int circularSubarraySum(int arr[], int n){
       
       // your code here
       int x = kadanes(arr,n);
       int y =0;
       for(int i =0;i<n;i++)
       {
           y += arr[i];
           arr[i] = -arr[i];//here we are calculating min sub array 
       }                    //by changing sign so that min subarray became max sub array 
       int z = kadanes(arr,n);//z is maxsub array after changing sign
       if(y-(-z)==0)//and then subtract total sum (y) with negative of z
       {
           return x;
       }
       return max(x,y-(-z));
   }
};

// { Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends