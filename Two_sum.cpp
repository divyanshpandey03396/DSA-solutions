class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        vector<int>v;
        for(int i=0;i<nums.size();i++)
        {
            int findd=target-nums[i];
            if(m.find(findd)!=m.end()){
                v.push_back(i);
                v.push_back(m[findd]);
            }
               else{
                   m[nums[i]]=i;
               }
        }
               return v;
    }
};