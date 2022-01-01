class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        int c1=0,c2=0;
        int cur1=INT_MIN,cur2=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
             if(nums[i]==cur1)
                 c1++;
            else if(nums[i]==cur2)
                c2++;
            else if(c1==0)
                {cur1=nums[i];
            c1=1;}
            else if(c2==0)
               { cur2=nums[i];
            c2++;}
            else
            {
                c1--;
                c2--;
            }
        }
        c1=0;
        c2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==cur1)c1++;
            else if(nums[i]==cur2) c2++;
            
        }
        vector<int> ans;
        if(c1>nums.size()/3)
            ans.push_back(cur1);
        if(c2>nums.size()/3)
            ans.push_back(cur2);
        
        return ans;
        
    }
    
};
