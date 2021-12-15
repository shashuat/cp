#include <bits/stdc++.h>
using namespace std;

class Student{
    int age;
    string firstname;
    string lastname;
    int std;

    public:
    void getData()
    {
        cin>>age;
        cin>>firstname;
        cin>>lastname;
        cin>>std;
    }

    void putData()
    {
        cout<<age<<" "<<firstname<<" "<<lastname<<" "<<std<<endl;
    }
};

int main() 
{
    Student s;

    s.getData();
    s.putData();

    return 0;
}