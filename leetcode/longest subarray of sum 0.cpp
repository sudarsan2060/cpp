class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        int maxl=0;
        int sum=0;
        map<int,int> mp;
        
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
            if(sum==0)
            {
                maxl=i+1;
                
            }
            else
            {
                if(mp.find(sum)!=mp.end())
                {
                    maxl=max(maxl,i-mp[sum]);
                   
                }
                else
                {
                    mp[sum]=i;
                }
            }
        }
        return maxl;
    }
};
