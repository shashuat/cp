#include <iostream>
using namespace std;

int main() 
{
    long int n, h, x;
    
    cin>>n>>h>>x;
    
    long int timezone[n];
    
    int c=0;
    
    for(int i=0; i<n; i++)
    {
        cin>>timezone[i];
        
        if(x+timezone[i]>=h)
        {
            c++;
        }
    }
    
    if(c==0)
    {
        cout<<"NO"<<endl;
    }
    
    else
    {
        cout<<"YES"<<endl;
    }
    
	return 0;
}