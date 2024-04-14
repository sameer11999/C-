#include<iostream>
using namespace std;

int main()
{

    int b;
    int a;

    cout<<"Enter a : "<<endl;
    cin>>a;
    cout<<"BEFORE SWAPPING A : " << a<<endl;

    cout<<"Enter b : "<<endl;
    cin>>b;
    cout<<"BEFORE SWAPPING B : " << b<<endl;

    int temp;

    temp=a;
    a=b;
    b=temp;
    
    
    cout<<endl<<"AFTER SWAPPING A : " << a<<endl;
    cout<<"AFTER SWAPPING B : " << b<<endl;

    return 0;
}