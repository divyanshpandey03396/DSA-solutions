// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int rep=0,miss=0,k=1;
        while(arr[k]>0)
        {
            if (arr[arr[k]]>0) {
                arr[arr[k]]*=-1;
                k=arr[abs(k)];
            }
            else rep=abs(k);
        }
        for (int i=1;i<n;i++)
        {
            if(arr[i]>0) miss=i;
        }
        int* ans=new int[2];
        ans[0]=rep;
        ans[1]=miss;
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends