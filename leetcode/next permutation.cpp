class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int n=nums.size(),l,i;
        
        for( i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                break;
            }
        }
        
        if(i<0)
        {
            reverse(nums.begin(),nums.end());
            
        }
        
        else
        {  l=n-1;
            while(l>i)
            {
                if(nums[i]<nums[l])
                {
                    swap(nums[i],nums[l]);
                    break;
                }
                l--;
            }
         reverse(nums.begin()+i+1,nums.end());
                
        }
    }
};
