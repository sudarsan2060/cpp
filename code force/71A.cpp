#include<iostream>
 

using namespace std;
int main()
{
     int n;
     cin>>n;
    while(n--)
     {   
          string c; 
          getchar();
          
          cin>>c;
         
         if(c.length()>10)
          cout<<c[0]<<c.length()-2<<c[c.length()-1]<<endl;
         
         else{
             cout<<c<<endl;
         }
     }
     return 0;
}
