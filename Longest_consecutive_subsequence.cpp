class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       unordered_set<int> st;
        for(auto num:nums){
            st.insert(num);
        }
        int n=nums.size();
        
        int mx_len=0;
        for(int i=0;i<n;i++){
            if(st.find(nums[i]-1)==st.end()){
                int curr_len=1;
                int curr_num=nums[i];
                while(st.count(curr_num+1)){
                    curr_len++;
                    curr_num++;
                }
                mx_len=max(mx_len,curr_len);
            }
        }
        return mx_len;
    }
};