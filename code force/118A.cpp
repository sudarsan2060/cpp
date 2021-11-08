#include <iostream>
#include<cctype>


using namespace std;

int main()
{
     string c;
     cin>>c;
     for(int i=0;i<c.length();i++)
     {
         if(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'||c[i]=='Y'||c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i]=='y')
          continue;
          else
          cout<<"."<<(char)tolower(c[i]);
         
     }
     

    return 0;
}
