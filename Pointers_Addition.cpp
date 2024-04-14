#include<iostream>
using namespace std;

int main()
{

    int a;
    int b;

    cout<<"Enter 1st Number : ";
    cin>>a;

    cout<<"Enter 2nd Number : ";
    cin>>b;

   

    int *aPtr=&a;  
    int *bPtr=&b; 

    int sum= *aPtr+*bPtr;

    cout<<"\n Addtion of two numbers by using pointer is :" <<sum<<endl;



}