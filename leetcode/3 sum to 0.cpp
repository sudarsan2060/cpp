class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        sort(nums.begin(),nums.end());
        vector<vector<int>> p;
        if (nums.size()<3)
            return p;
        
        for(int i=0;i<nums.size();i++)
        {
            if(i&&(nums[i]==nums[i-1]))
                continue;
            
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                if(nums[i]+nums[j]+nums[k]==0)
                {
                    vector<int> v;
                    v.push_back(nums[i]);
                    v.push_back(nums[j]);
                    v.push_back(nums[k]);
                    p.push_back(v);
                    
                    while(j<k&&(nums[j]==nums[j+1]))
                        j++;
                    while(j<k&&(nums[k]==nums[k-1]))
                        k--;
                }
                if(nums[i]+nums[j]+nums[k]>0)
                    k--;
                else
                    j++;
            }
        }
        return p;
    }
};
