/*** bruet force soln***********/
class Solution {
public:
    int maxProfit(vector<int>& s) {
         int n=s.size();
        int max=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int profit=s[j]-s[i];
                if(max<profit)
                    max=profit;
            }
        }
        return max;
    }
};
/********* o(n) time complexity ************/
class Solution {
public:
    int maxProfit(vector<int>& s) {
         int n=s.size();
        int max=0,minpos=0;
        for(int i=1;i<n;i++)
        {
            if(s[i]-s[minpos]>max)
                max=s[i]-s[minpos];
            else if(s[i]-s[minpos]<0)
                minpos=i;
                 
        }
        return max;
    }
};
