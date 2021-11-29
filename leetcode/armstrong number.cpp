bool solve(int n) {
    int l=0;
    int c=n;
    int sum=0;
    while(n!=0){
      
     n=n/10;
     l++;

    }
    n=c;
    while(n!=0)
    {
        int r=n%10;
        sum+=pow(r,l);
        n=n/10;
    }
    if(sum==c)
    return true;

    return false;
}
