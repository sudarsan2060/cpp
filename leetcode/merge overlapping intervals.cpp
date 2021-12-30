class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        
        sort(v.begin(),v.end());
         
        vector<vector<int>> p;
        vector<int> temp=v[0];
        for(auto it: v)
        {
            if(temp[1]>=it[0])
            {
                temp[1]=max(it[1],temp[1]);
                
            }
             else
             { 
                  p.push_back(temp);
                 temp=it;
             }
        }
        p.push_back(temp);
        
        return p;
    }
};
