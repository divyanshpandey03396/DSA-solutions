// { Driver Code Starts
#include <iostream>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        if(n==1) return 1;
        if(n==2) return -1;
        int i=0,j=n-1;
        int sum1=a[i],sum2=a[j];
        while(i<j){
            if(sum1<sum2) {
                i++;
                sum1+=a[i];
            }
            else if(sum1>sum2){
                j--;
                sum2+=a[j];
            }
            else{
                j--;
                sum2+=a[j];
                i++;
                sum1+=a[i];
            }
        }
        if(sum1==sum2) return i+1;
        else return -1;
    }

};

// { Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends