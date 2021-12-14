// https://www.codechef.com/problems/REACTION

#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,temp=0,count;
        cin>>r>>c;
        int arr[r][c];
        
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin>>arr[i][j];             
            }
        }
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                count = 0;

                if(i != 0)
                    count++;
                if(j != 0)
                    count++;
                if(i != r-1)
                    count++;
                if(j != c-1)
                    count++;
                
                if(arr[i][j] >= count)
                {
                    temp=1;
                    break;
                }             
            }
        }

        if(temp==1)
            cout<<"unstable"<<endl;
        else
            cout<<"stable"<<endl;
    }
    return 0;
}