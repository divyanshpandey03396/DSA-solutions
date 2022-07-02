class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
    
    vector<vector<int>>ans;
    
    if(nums.size()<4) return ans;
    
    int n=nums.size();
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            long long int rem=target-1LL*nums[i]-1LL*nums[j];
            
             int low=j+1;
             int high=n-1;
            
            while(low<high){
              long long int val=nums[low]+nums[high];
                if(val<rem) low++;
                else if(val>rem) high--;
                else {
                    vector<int>temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[low]);
                    temp.push_back(nums[high]);
                    
                    ans.push_back(temp);
                    
                    while(low<high && nums[low]==temp[2])low++;
                    while(low<high && nums[high]==temp[3]) high--;
                    
                }
            }
            
            while(j+1<n && nums[j]==nums[j+1]) j++;
            
        }
        
        while(i+1<n && nums[i]==nums[i+1])i++;
        
    }
    
    return ans;
    }
};