#include<bits/stdc++.h>
 using namespace std;
  vector<vector<int>> merge(vector<vector<int>>& val) {
        int n=val.size();
        int m=val[0].size();
        vector<vector<int>> ans;
        vector<int> res;
        sort(val.begin(),val.end());
        ans.push_back(val[0]);
        if(n==1)
        {
            return ans;
        }
        int j=0;
        for(int i=1;i<n;++i)
        {
           if(ans[j][1]>=val[i][0] && ans[j][1]<=val[i][1])
           {
               ans[j][1]=val[i][1];
              
           }
            else if(ans[j][1]>=val[i][0] && ans[j][1]>=val[i][1])
            {
                continue;
            }
            else
            {
                res.push_back(val[i][0]);
                res.push_back(val[i][1]);
                ans.push_back(res);
                j++;
                res.clear();
            }
        }
        return ans;
    }