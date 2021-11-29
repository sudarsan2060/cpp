int solve(int n) {
    
    vector<int> v;
    while(n!=0)
    {
        int r=n%2;
        
        v.push_back(r);
        n=n/2;
    }
    int count =0;
    for(int i=0;i<v.size();i++)
    {
        if(v[i]==1)
        count++;
    }
    return count;
}
