#include <iostream>

using namespace std;

int main()
{   int n;
     cin>>n;
     int count=0;
     while(n--)
     {
         int a,b,c;
         cin>>a>>b>>c;
          
         if((a>0&&b>0)||(a>0&&c>0)||(b>0&&c>0))
          count++;
          
         
     }
     cout<<count<<endl;

    return 0;
}
