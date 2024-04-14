#include<iostream>
using namespace std;

int type(int num1,int num2)

{

    return num1+num2;
    
}
int main()
{
    int a,b;

    cout<<"Enter two number : "<<endl;
    cin>>a>>b;
    cout<<type(a,b);
    cout<<endl;

    main();
    return 0;

}