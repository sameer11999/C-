#include<iostream>
using namespace std;


int pin,password=2222;
int newp;

void deposite(int amount,int a)
{

    int f = amount+a;
    cout<<f;

}

void withdraw(int amount,int a)
{

     int f = amount-a;
    cout<<f;

}

void balance (int n1)
{

     int f = n1;
    cout<<f;

}

void NEWP (int d)
{
   newp = d;
}

int main()
{

cout<<endl;

cout<<"Enter your pin : "<<endl;
cin>>pin;

if(pin==password){

int c;

cout<<"Enter your choice : "<<endl;

cout<<"1.DEPOSITE"<<endl;
cout<<"2.WITHDRAW"<<endl;
cout<<"3.BALANCE"<<endl;
cout<<"4.Change your pin : "<<endl;

cin>>c;


 int n1=10000;
 int n2;


switch (c)
{

case 1:
    
    cout<<"Enter your amount for deposite : "<<endl;
    cin>>n2;
    cout<<"Remaining balance is : "<<endl;
    deposite(n1,n2);
    break;


case 2:
    
    cout<<"Enter your amount for withdraw : "<<endl;
    cin>>n2;
    cout<<"Remaining balance is : "<<endl;
    withdraw(n1,n2);
    break;


case 3:
    cout<<"Balance is : "<<endl;
    balance(n1);
    break;


case 4:
    
    cout<<"Enter your New Pin: "<<endl;
    cin>>newp;
    cout<<"Your pin is changed... "<<endl;
    password=newp;
    break;    


default:
    cout<<"INVALID CHOICE"<<endl;

    break;

    }
}


else
    {
         cout<<"Invalid Pin Entered"<<endl;
    }

 main();

    return 0;

}