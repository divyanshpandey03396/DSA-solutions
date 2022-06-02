#include<bits/stdc++.h>
 using namespace std;
  void nextPermutation(vector<int>& nums) {
       int n=nums.size()-1;
        int rt=-1;
        int lt;
        for(int i=n-1;i>=0;--i)
        {
            if(nums[i]<nums[i+1])
            {
                 rt=i;
                break;
            }
               
        }
        if(rt==-1)
        {
            sort(nums.begin(),nums.end());
            return;
        }
        for(int i=n;i>=0;--i)
        {
            if(nums[rt]<nums[i])
            {
                lt=i;
                break;
            }
                
        }
        
       
        swap(nums[rt],nums[lt]);
        reverse(nums.begin()+rt+1,nums.end());
    }