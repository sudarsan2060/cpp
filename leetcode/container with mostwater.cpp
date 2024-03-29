class Solution {
public:
    int maxArea(vector<int>& height) {
        
         int n=height.size();
        int maxarea=0;
        int i=0,j=n-1;
        while(i<j)
        {
           int  area=min(height[i],height[j])*(j-i);
            if(height[i]>height[j])
                j--;
            else
                i++;
            maxarea=max(maxarea,area);
        }
        
        return maxarea;
    }
};
