
#include <iostream>
#include<algorithm>
 

using namespace std;

int main()
{
      string str;
      cin>>str;
      int n=str.length();
    for(int j=0;j<n;j++){
     for(int i=0;i<n-2;i++)
     {
         if(str[i]>str[i+2])
         {
             int temp=str[i];
             str[i]=str[i+2];
             str[i+2]=temp;
         }
     }}
      cout<<str;
       
        
     

    return 0;
}
