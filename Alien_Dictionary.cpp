// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    string findOrder(string dict[], int N, int K) {
        unordered_map<char, unordered_set<char>> AList;
        
        for(int i=0; i<N-1; i++){
            int n = min(dict[i].size(), dict[i+1].size());
            
            for(int j=0; j<n; j++){
                if(dict[i][j] != dict[i+1][j]){
                    AList[dict[i][j]].insert(dict[i+1][j]);
                    break;
                }
            }
        }
        
        unordered_map<char,int> indegree;
        
        for(pair<char, unordered_set<char>> it : AList){
            if(not indegree.count(it.first)){
                indegree[it.first] = 0;
            }
            
            for(char c : it.second){
                indegree[c]++;
            }
        }
        
        queue<char> queue;
        string result = "";
        
        for(pair<char,int> it : indegree){
            if(it.second == 0){
                queue.push(it.first);
            }
        }
        
        while(not queue.empty()){
            char u = queue.front();
            queue.pop();
            result += u;
            
            for(char v : AList[u]){
                indegree[v]--;
                
                if(indegree[v] == 0){
                    queue.push(v);
                }
            }
        }
        
        return result;
    }
};

// { Driver Code Starts.
string order;
bool f(string a, string b) {
    int p1 = 0;
    int p2 = 0;
    for (int i = 0; i < min(a.size(), b.size()) and p1 == p2; i++) {
        p1 = order.find(a[i]);
        p2 = order.find(b[i]);
        //	cout<<p1<<" "<<p2<<endl;
    }

    if (p1 == p2 and a.size() != b.size()) return a.size() < b.size();

    return p1 < p2;
}

// Driver program to test above functions
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;
        string dict[N];
        for (int i = 0; i < N; i++) cin >> dict[i];
        
        Solution obj;
        string ans = obj.findOrder(dict, N, K);
        order = "";
        for (int i = 0; i < ans.size(); i++) order += ans[i];

        string temp[N];
        std::copy(dict, dict + N, temp);
        sort(temp, temp + N, f);

        bool f = true;
        for (int i = 0; i < N; i++)
            if (dict[i] != temp[i]) f = false;

        if(f)cout << 1;
        else cout << 0;
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends