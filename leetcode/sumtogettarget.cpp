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

/*******another one with o(n) time ************/
class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
       
         int h=v.size()-1;
        int l=0;
        while(v[l]+v[h]!=target)
        {
            if(v[h]+v[l]<target)
                l++;
            else
                h--;
        }
        
         
        return {l+1,h+1};
    }
};
