class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>> m;
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<pair<TreeNode*,int>> q;
        q.push(make_pair(root,0));
        while(!q.empty()){
            map<int,vector<int>> s;
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* x = q.front().first;
                int pos = q.front().second;
                q.pop();
                s[pos].push_back(x->val);
                if(x->left) q.push({x->left,pos-1});
                if(x->right) q.push({x->right,pos+1});
            }
            for(auto i:s){
                sort(i.second.begin(),i.second.end());
                for(int j=0;j<i.second.size();j++){
                    m[i.first].push_back(i.second[j]);
                }
            }
        }
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};