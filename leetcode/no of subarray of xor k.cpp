int Solution::solve(vector<int> &A, int B) {
    
    int count=0;
    int x=0;
    map<int,int> mp;
    for(auto i : A)
    {
        x=x^i;
        if(x==B)
        {
            count++;
        }
         
            if(mp.find(x^B)!=mp.end())
            {
                count+=mp[x^B];
            }
            
        mp[x]+=1;

    }

    return count;
}
