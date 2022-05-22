/* o(n) time complexity ,o(1) space*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
       int j=0,i=0;
        
        while(i<=nums.size()-1)
        {
            if(nums[j]==nums[i])
                i++;
            
            else
                {
               nums[j+1]=nums[i];
                j++;
                 i++;
                }
                 
        }
        return j+1;
        
    }
};
