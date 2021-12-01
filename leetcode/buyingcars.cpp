int solve(vector<int>& prices, int k) {
    int n=prices.size(),sum=0,count=0;
    sort(prices.begin(),prices.end());
   for(int i=0;i<n;i++)
    {
           if(sum+prices[i]<=k)
           {
               sum+=prices[i];
               count++;
           }
    }
    return count;
}
