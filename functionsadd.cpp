#include<iostream>
using namespace std;


void add(int a,int b)
{
    int c = a+b;
    cout << c;
}

void sub(int a,int b)
{
    int c = a-b;
    cout << c;
}
void mul(int a,int b)
{
    int c = a*b;
    cout << c;
}
void division(int a,int b)
{
    int c = a/b;
    cout << c;
}
int main()
{
int n1,n2;
cout<<"Enter two values : "<<endl;
 cin>>n1>>n2;


 int c;
cout<<"Enter your choice : "<<endl;
 cin>>c;

switch (c)
{
case 1:
    cout<<"Sum of two number is : "<<endl;
    add(n1,n2);
    break;

case 2:
    cout<<"Substraction of two number is : "<<endl;
   sub(n1,n2);
    break;

case 3:
    cout<<"Multiplication of two number is : "<<endl;
    mul(n1,n2);
    break;

case 4:
    cout<<"Division of two number is : "<<endl;
    break;

default:
    cout<<"INVALID CHOICE"<<endl;

    break;
}
 
 main();

    return 0;
}