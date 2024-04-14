#include<iostream>
using namespace  std;

int a=20;
int b=25;
int temp;

void SWAP()
{
    temp=a;
    a=b;
    b=temp;
    
}

void PRINTVARIABLES()
{
    cout<<endl<<"a="<<a<<endl;
    cout<<endl<<"b="<<b<<endl;
  
}


int main()
{
    
    PRINTVARIABLES();
    SWAP();
    PRINTVARIABLES();
    

}

