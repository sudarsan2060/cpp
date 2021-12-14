class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
      long maxs=INT_MIN;
    sort(nums.begin(),nums.end());
        if(nums.size()<3)
            return 0;
         
        
        
        
        for(int i=0;i<nums.size()-2;i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                 int s=nums[i]+nums[j]+nums[k];
                 
                if(s==target)
                    return s;
                
                if(abs(maxs-target)>abs(s-target))
                    maxs=s;
                
                if(s<target)
                    {
                     
                    j++;}
                else
                   { 
                     
                     
                    k--;}
                
            }
        }
        
        return maxs;
    }
};
