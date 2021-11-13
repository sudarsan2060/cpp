#include <iostream>
#include<algorithm>
 

using namespace std;

int main()
{
      int n;
      int r=0;
      cin>>n;
      
      if(n%5==0)
      cout<<n/5;
      
       else
       {
           r+=n/5;
           
            cout<<r+1;
       }
        
     

    return 0;
}
