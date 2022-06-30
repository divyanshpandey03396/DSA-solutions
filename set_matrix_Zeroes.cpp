class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
       set<int>row,col;
		int m=mat.size(),n=mat[0].size();
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(mat[i][j]==0){
					row.insert(i);
					col.insert(j);
				}
			}
		}
		for(auto r: row){
			for(int j=0;j<n;j++) mat[r][j]=0;
		}
		for(auto c: col){
			for(int i=0;i<m;i++) mat[i][c]=0;
        }
    }
};