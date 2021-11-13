#include <iostream>
#include<algorithm>
 

using namespace std;

int main()
{
      string str;
      cin>>str;
      int n=str.length();
      int count =0;
     sort(str.begin(),str.end());
      
       for(int i=0;i<str.length()-1;i++)
       {
           if(str[i]==str[i+1])
            count++;
       }
       
        if((n-count)%2==0)
          cout<<"CHAT WITH HER!";
        else
        cout<<"IGNORE HIM!";
     

    return 0;
}
