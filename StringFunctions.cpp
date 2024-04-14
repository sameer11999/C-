#include<iostream>
using namespace std;

void swap()
{
    string a,b,c;

    a = "sameer";
    b = "lalit";
    c;

    cout<<"String a = "<<a<<endl;
    cout<<"String b = "<<b<<endl;

    c=a;
    a=b;
    b=c;

    cout<<"String a = "<<a<<endl;
    cout<<"String b = "<<b<<endl;

};

int main()

{
   
    swap();
    return 0;
}

