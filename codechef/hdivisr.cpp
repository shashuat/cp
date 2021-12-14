#include <iostream>
using namespace std;

int main() 
{
	int n;
	int i;
	cin>>n;
	
	for(i=10;i>=1;i--)
	{
	    if(n%i==0)
	    {
	        break;
	    }
	}
	cout<<i<<"\n";
	
	return 0;
}