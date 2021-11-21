class Solution {
public:
    void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        
        
        for(int i=0,j=0;i<m+n;i++)
        {
            if(i<m)
                v1[i]=v1[i];
            else
            {  v1[i]=v2[j];
            j++;}
        }
        
        sort(v1.begin(),v1.end());
    }
};
