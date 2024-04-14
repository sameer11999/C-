#include<iostream>
using namespace std;

int counter=0;
string n="character";

void Search()
{
    for (int i = 0; i < n.length(); i++)
    {
       if (n[i]=='c')
       { 
        
         n[i]='*';
        
       }
    }
    cout<<n;
}


int main()
{
   Search();
    return 0;
}