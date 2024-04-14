#include<iostream>
using namespace std;


string a="sameer";

void reverse()
{
    for (int i = a.length(); i >= 0; i--)
    {
       cout<<a[i];
       
    }
    
}

int main()
{
    reverse();
    return 0;
}