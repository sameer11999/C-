#include<iostream>
using namespace std;


int counter=0;

void Length()
{

    string a="Sameerwalke";
    // cout<<"Enter String : ";
    // cin>>a;
    // a="Sameerwalke";

    cout<<a.length();
    
   int b=0;
   
   while (b==0)

   {

    if (a[counter]!=0)
    {
       cout<<a[counter];
       counter+=1;
    }

    else
    {
        b=1;
    }

   }
   cout<<endl;
   cout<<counter;
 
}
int main()
{
    Length();
    return 0;
}
