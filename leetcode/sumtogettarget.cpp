class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        
         
         int h=v.size();
        int i,j;
        for(int i=0;i<h-1;i++)
        { 
          for(int j=i+1;j<h;j++) 
          {
              if(v[i]+v[j]==target)
                  return{i,j};
          }
        }
        return {i,j};
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
