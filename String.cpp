#include<iostream>
using namespace std;

int main()
{

    string name;
    cout<<"Enter your name : ";
    getline(cin,name);
    cout<<name<<endl;
    
    // int a;
    // cin>>a;

    // for (int i = name.length(); i >=0;  i--)
    // {
    //     cout<< " " <<name[i];

    // }

    for (int i = 0; i < name.length(); i++)
    {
        /* code */
        if(name[i]!='c')
        {
            cout<<name[i];
            
        }
    }
}