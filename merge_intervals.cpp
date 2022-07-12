// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& arr) {
         // Code here
         if(arr.size()==1) return arr;
         sort(arr.begin(),arr.end());
         vector<vector<int>> ans;
         ans.push_back(arr[0]);
         int i=1;
         for(auto it:arr){
              int n=ans.size();
          if(it[0]<=ans[n-1][1]) ans[n-1][1]=max(it[i],ans[n-1][1]);
          else{
              ans.push_back(it);
          }
         }
         return ans;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}  // } Driver Code Ends