class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        
         int i=0,j=0;
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        vector<int> p;
        while(i<v1.size()&&j<v2.size())
        {
            if(v1[i]==v2[j])
            {
                p.push_back(v1[i]);
                i++;
                j++;
            }
            else if(v1[i]>v2[j])
                j++;
            else
                i++;
        }        
          
        return p ;
    }
};
