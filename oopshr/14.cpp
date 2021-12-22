#include <bits/stdc++.h>
using namespace std;

class Matrix 
{
    public:
        vector<vector<int>> a;

        Matrix() {}
        Matrix operator+(const Matrix &o) 
        {
            Matrix sum(*this);
            for (size_t i = 0; i < sum.a.size(); i++) 
            {
                for (size_t j = 0; j < sum.a[i].size(); j++) 
                {
                    sum.a[i][j] += o.a[i][j];
                }
            }
            return sum;
        }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t; 
    cin >> t;
    
    while(t--) 
    {
        Matrix x;
        Matrix y;
        Matrix result;
        int n,m,i,j;
        cin >> n >> m;
        for(i=0;i<n;i++) 
        {
            vector<int> b;
            int num;
            for(j=0;j<m;j++) 
            {
                cin >> num;
                b.push_back(num);
            }
            x.a.push_back(b);
        }
            for(i=0;i<n;i++) 
            {
                vector<int> b;
                int num;
                for(j=0;j<m;j++) 
                {
                    cin >> num;
                    b.push_back(num);
                }
                y.a.push_back(b);
            }
            result = x+y;

            for(i=0;i<n;i++) 
            {
                for(j=0;j<m;j++) 
                {
                    cout << result.a[i][j] << " ";
                }
                cout << endl;
            }
        }
    
    return 0;
}


