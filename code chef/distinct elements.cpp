#include <bits/stdc++.h>
using namespace std;

  long solve()
  {
      int n;
      cin>>n;
      long mod=1000000007;
     int a[n];
     long ans=1;
     int maxv=INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        maxv=max(maxv,a[i]);
    }
    
    int fre[maxv+1]={0};
    for(int i=0;i<n;i++)
    {
        fre[a[i]]++;
    }
    
    for(int i=0;i<=maxv;i++)
    {
        ans=ans*(1+fre[i]);
        ans%=mod;
    }
    
     ans=(ans-1+mod)%mod;
    
    return ans;
  }
int main() {
	// your code goes here
	int t;
	cin>>t;
	
	while(t--)
{
    
    cout<<solve()<<endl;
    
}
	return 0;
}
