#include <bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    int a[5][5];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin>>a[i][j];
        }
    }
     for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
             if(a[i][j]==1)
             {
                   if(i<3&&j<3)
                   cout<<4-(i+j);
                   else if(i>=3&&j<3)
                   cout<<i-j;
                   else if(i<3&&j>=3)
                   cout<<j-i;
                   else
                   cout<<(i+j)-4;
                  
             }
             
        }
    }
    return 0;
}
