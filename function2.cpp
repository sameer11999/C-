#include<iostream>
using namespace std;

int data(int a,int b)
{

//    cout<<"The sum of two number : "<<a+b; 
    return a+b;

}

int main()
{
    int c,d;

    cout<<"Enter your number : "<<endl;
    cin>>c>>d;

    // int result= data(c,d);
    // cout<<result;

    cout<<data(c,d);
    cout<<endl;
    main();
    return 0;

}
