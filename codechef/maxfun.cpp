#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long int t; 
    cin>>t;
    while(t--)
    {

    long long int n;
    cin>>n;

    long long int arr[n];
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr, arr + n);

    long long int a = arr[0]; 
    long long int b = arr[1]; 
    long long int c = arr[n-1];
    long long int ans;
    
    ans = c-a + c-b + b-a;
    cout << ans << endl;
    }
	return 0;
}