#include <iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;

    for(int i=0; i<T; i++)
    {
    int am,bm,cm,tm,a,b,c;
    cin>>am>>bm>>cm>>tm>>a>>b>>c;

    int total;
    total = a+b+c;

    if(a>=am && b>=bm && c>=cm && total>=tm)
        cout<<"YES"<<endl;
    
    else
        cout<<"NO"<<endl;
    }

    return 0;
}