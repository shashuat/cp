#include <iostream>
using namespace std;

int main() 
{
	int n,k;
	cin>>n>>k;
	long long int arr[k];
	
  for(int i=0;i<k;i++)
  {
	    arr[i]=1;
	}
	long long int x=k;
	
  for(int i=0;i<n-k;i++)
  {
	    long long int sum = 0;
	    for(int j=0;j<k;j++)
      {
	        sum+=arr[j];
	        arr[j]=arr[j+1];
	    }
	    arr[k-1]=sum%1000000007;
	}
	cout<<arr[k-1];
	
  return 0;
}
