#include<iostream>
using namespace std;

struct
{

int roll_no,price;
string name;
string book_name;

}lib[5];


int main()
{
    int sum=0;
    int a=0;
    
    cout<<"Enter the no. of books you want to take : "<<endl;
    cin>>a;
     
    for(int i=0; i<=a; i++)
    {
        cout<<"Enter the book name "<<i+1<<endl;

        cout<<"Enter name : "<<endl;
        cin>>lib[i].name;

        cout<<"Enter roll no. : "<<endl;
        cin>>lib[i].roll_no;

        cout<<"Enter book name : "<<endl;
        cin>>lib[i].book_name;

        cout<<"Enter price : "<<endl;
        cin>>lib[i].price;

         lib[i].name;
         lib[i].roll_no;
         lib[i].book_name;
         lib[i].price;

         sum+=lib[i].price;

    }

    cout<<"The price of two book is : "<<sum;

}