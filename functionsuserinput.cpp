#include<iostream>
using namespace std;

void divi(int num1,int num2)

{

    int a=num1/num2;
    cout<<a;
    
}

void mul(int num1,int num2)

{

    int b=num1/num2;
    cout<<b;
    
}

void add(int num1,int num2)

{

    int c=num1/num2;
    cout<<c;
    
}

void sub(int num1,int num2)

{

    int d=num1/num2;
    cout<<d;
    
}


int main()
{
    int choice;
    int a,b;

     cout<<"ENTER TWO NUMBER : "<<endl;
    cin>>a>>b;
    
    cout<<"Enter your choice : "<<endl;
    cin>>choice;

    switch (choice)
    {
    case 1:

       cout<<"DIVISION : "<<divi<<endl;

        break;
    
    case 2:
       cout<<"MULTIPLICATION : "<<a*b<<endl;

        break;

     
    case 3:
       cout<<"ADDITION : "<<a+b<<endl;

        break;

     case 4:
       cout<<"SUBSTRACTION : "<<a-b<<endl;

        break;

    default:

        cout<<"INVALID CHOICE"<<endl;

        break;
    }

   

  


    main();
    return 0;

}