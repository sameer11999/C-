#include<iostream>
using namespace std;

int main()
{
    int sam[6];
    int a;
    for (int i = 0; i < 7; i++)
    {
        cin>>a;
        sam[i]=a;  
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"["<<sam[i]<<"]";
    }
    
    return  0;
}