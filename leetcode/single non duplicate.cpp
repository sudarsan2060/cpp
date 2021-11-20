class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n;i+=2)
        {     if(n==1)
            return nums[0];
            if((nums[i]!=nums[i+1])&&i<n-1)
                return nums[i];
            if((i==n-1)&&(nums[i]!=nums[i-1]))
                return nums[i];
            
            
        }
        return nums[0];
    }
};
