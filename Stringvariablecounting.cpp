#include<iostream>
using namespace std;

int counter=0;
string a="character";

int Search(char c)
{
    for (int i = 0; i < a.length(); i++)
    {
       if (a[i]==c)
       { 
        counter+=1;
       }
       
    }
    return counter;
}


int main()
{
    cout<<Search('t');
    return 0;
}