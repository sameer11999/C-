#include<iostream>
using namespace std;


struct Restaurant
{
   int price=0;
   string food=" ";
   string stuff=" ";

};

  Restaurant sam[5];


int main()
{
    int a;
    int total=0;
   

    cout<<"Enter number of food u need : "<<endl;
    cin>>a;

    for (int i = 0; i < a; i++)
    {
       
       cout<<"Enter your food name to order : "<<endl;
       cin>>sam[i].food;

       cout<<"Enter your price of food : "<<endl;
       cin>>sam[i].price;

       cout<<"Any Extra stuff : "<<endl;
       cin>>sam[i].stuff;
      

    total+=sam[i].price;

    }
    

    cout<<"Your Orders total : "<<total;


}