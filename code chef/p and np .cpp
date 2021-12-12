#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int l=s.size();
	    int v=0;
	    int count=0;
	    
	    for(int i=0;i<s.size();i++)
	    {
	        if((s[i]=='N'&&s[i+1]=='N')&&i<s.size()-1)
	        {
	            count++;
	            s[i+1]='P';
	        }
	        
	        if(s[s.size()-1]=='N')
	        {
	            s[s.size()-1]='P';
	            count++;
	        }
	        
	    }
	    
	    for(int i=0;i<l;i++)
	    {
	        if(s[i]=='N')
	           v++;
	    }
	    
	    if(v==l/3)
	    cout<<count<<endl;
	    else
	    {
	        int b=abs(v-l/3);
	        cout<<count+b<<endl;
	        
	    }
	    
	}
	return 0;
}
