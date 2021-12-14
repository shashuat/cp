#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    
    for(int i=0; i<T; i++)
    {
        double k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        double tans = 100/(k1*k2*k3*v);
        double t = (round(tans*100))/100;
        
        if (t<9.58)
            cout<<"YES"<<endl;
        
        else
            cout<<"NO"<<endl;
    }
	return 0;
}
