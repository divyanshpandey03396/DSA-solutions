// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends


int minDeletions(string s, int n) { 
    //complete the function here 
      string str1=s;
        reverse(s.begin(), s.end());
        string str2=s;
        // int n=str1.length();
	    int m=str2.length();
	    int t[n+1][m+1];
	    for(int i=0;i<n+1;i++){
	        for(int j=0;j<m+1;j++){
	            if(i==0){
	                t[i][j]=0;
	            }
	            if(j==0){
	                t[i][j]=0;
	            }
	        }
	    }
	    for(int i=1;i<n+1;i++){
	        for(int j=1;j<m+1;j++){
	            if(str1[i-1]==str2[j-1]){
	                t[i][j]=1+t[i-1][j-1];
	            }
	            else {
	                t[i][j]=max(t[i-1][j],t[i][j-1]);
	            }
	        }
	    }
	    int ans=t[n][m];
        return n-ans;
} 