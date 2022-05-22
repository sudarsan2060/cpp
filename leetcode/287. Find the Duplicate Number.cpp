/* o(n) time complexity , o(n) space complexity */

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                return nums[i];
            }
            
            m[nums[i]]=i;
        }
        
        return -1;
    }
};


/* constant space complexity*/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        
        
        while(1)
        {
                                                   /* we replace all elements with their respctive index  until its location is repeated 
            if(nums[nums[0]]!=nums[0])
             
            swap(nums[nums[0]],nums[0]);
            
            else 
                return nums[0];
        }
        
        return nums[0];
    }
};
