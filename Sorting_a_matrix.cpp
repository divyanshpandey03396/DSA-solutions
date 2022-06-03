// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   vector<vector<int>> sortedMatrix(int n, vector<vector<int>> mat) {
        
        priority_queue<int , vector<int> , greater<int>>vec;
        
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            vec.push(mat[i][j]);
        }
        
        
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            mat[i][j] = vec.top();
            vec.pop();
        }
        
        return mat;
        
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}  // } Driver Code Ends