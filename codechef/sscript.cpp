#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    
    for (int i=0; i<T; i++)
    {
        int n,k;
        cin>>n>>k;
        
        string s;
        cin>>s;
        
        int star=0;
        int max=0;
        
        for(int j=0; j<n; j++)
        {
            if(s[j]=='*')
            {
                star++;
                if (star>=max)
                {
                    max=star;
                }
            }
            else
            {
                star=0;
            }
        }
        if(max>=k)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    
	return 0;
}
