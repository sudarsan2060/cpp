class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        
        vector<int> p;
         int h=v.size();
        int l=0;
        
        while(l<h)
        {
            for(int i=l+1;i<h;i++)
            {
                if(v[i]+v[l]==target)
                {
                      p.push_back(l+1);
                      p.push_back(i+1);
                }
            }
            l++;
        }
        return p;
    }
};
