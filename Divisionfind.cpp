#include<iostream>
using namespace std;


void Div()
{

    int n,m;
    cout<<"Enter your number : "<<endl;
    cin>>n;
    int count=0;

   for (int j = 1; j <= n; j++)
   {
        if (n%j==0)
        {
           cout<<j<<endl;
           count++;
        }
        
   }

   cout<<"Total numbers : "<<count;
   
    
}

int main()
{

    Div();

  return 0;  
} 
