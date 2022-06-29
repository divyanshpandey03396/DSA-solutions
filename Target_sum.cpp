class Solution {
public:
    int countSubsetSum(vector<int>& arr, int range){
        int n = arr.size();
        int t[n+1][range+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<range+1;j++){ 
                if(i==0)t[i][j] = 0;
                if(j==0)t[i][j] = 1;
            }
        }
        for(int i =1;i<n+1;i++){
            for(int j=0;j<range+1;j++){//if arr contains 0, start the second loop from 0
                if(arr[i-1]<=j)t[i][j] = t[i-1][j-arr[i-1]] + t[i-1][j];    //as we want the count of total subsets so we add all the subsets
                else    t[i][j] = t[i-1][j];
            }
        }
        return t[n][range];
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        target = abs(target);

        int sum = 0;
        for(int i=0;i<nums.size();i++)sum+=nums[i];
         if ((sum + target) % 2 == 1) return 0;     //if it gives odd value we cannot equally divide and get the correct range.
        int range = (target+sum)/2;
        
        return countSubsetSum(nums,range);
    }
};