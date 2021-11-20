class Solution {
public:
    vector<int> sortedSquares(vector<int>& v) {
        
        vector<int> p;
        
         for(auto i=v.begin();i!=v.end();i++)
         {
             p.push_back(*i * *i);
         }
        sort(p.begin(),p.end());
         
       return p;
    }
};
