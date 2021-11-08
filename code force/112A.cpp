#include <iostream>
#include<cctype>


using namespace std;

int main()
{
     string s1,s2;
     int count=0;
     cin>>s1>>s2;
     for(int i=0;i<s1.length();i++)
     {
         if(tolower(s1[i])>tolower(s2[i]))
        {  count++;
         break;}
         else if(tolower(s1[i])<tolower(s2[i]))
        {  count--;
        break;}
          
    
     }
     cout<<count;
     

    return 0;
}
