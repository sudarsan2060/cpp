class Solution {
public:
    int maxSubArray(vector<int>& v) {
        
        int k=0,res=INT_MIN,n=v.size();
        for(int i=0;i<n;i++)
        {
            if(k+v[i]<v[i])
                k=v[i];
            else
                k+=v[i];
            res=max(res,k);
        }
        
        return res;
    }
    
};
