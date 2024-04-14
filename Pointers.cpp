#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=20;
    int c=0;
    
     
     int *aPtr=&a;
     int *bPtr=&b;

     c=*aPtr;
     *aPtr=*bPtr;
     *bPtr=c;

    // temp=a;
    // a=b;
    // b=temp;

    cout<<*aPtr<<endl;
    cout<<*bPtr<<endl;
    
} 
