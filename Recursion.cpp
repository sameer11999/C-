#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n>1)
    {
        return n * factorial(n-1);

    }

    else 
    {
        return 1;
    }
}

int sum(int n)
{
    if(n>0)
    {
        return n + sum(n-1);

    }

    else 
    {
        return 0;
    }
}

int main()
{
    int n,result,add;

    cout<<"Enter the value : "<<endl;
    cin>>n;

    factorial(n);
    sum(n);
    
    result = factorial(n);
    add = sum(n);

    cout<<"The Factorial is : "<<result<<endl;
    cout<<"The Addition is : "<<add<<endl<<endl;


    main();
    return 0;

}