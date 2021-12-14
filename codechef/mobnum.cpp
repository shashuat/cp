#include <iostream>
using namespace std;
    
void main()
{
    int l,t,i;
    cin>>t;
    
    while(t--)
    {
        string s;
        int count=0;
        cin>>s;
        l=s.length();
    
        for(i=0;i<l;i++)
        {
            if(s[i]>=48 && s[i]<=57)
            count++;
                    
        }
        
    if(s[0]!=48 && count==l && l==10)
     printf("YES\n");
     
    else 
     printf("NO\n");
     
    }
}