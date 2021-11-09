#include <bits/stdc++.h>

using namespace std;

int main()
{
     int n,count=0,temp=0;
     cin>>n;
      vector<int> v={4,7,44,77,47,74,474,477,744,747,777};
      for(int i=0;i<v.size();i++)
      {
          if(n%v[i]==0)
          {cout<<"YES";
          return 0;}
      }
      
      cout<<"NO";

    return 0;
}
