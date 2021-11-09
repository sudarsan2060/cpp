#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    string s,p="hello";
    cin>>s;
    int i=0,j=0;
    for(i;i<s.length();i++)
    {
        if(s[i]==p[j])
        j++;
    }
    if(p.length()==j)
    cout<<"YES";
    else
    cout<<"NO";

    return 0;
}
