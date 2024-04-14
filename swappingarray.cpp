#include<iostream>
using namespace  std;

int main()
{
    int array[3];

    array[1];
    array[2];

    cout<<"Enter array[1] : ";
    cin>>array[1];

    cout<<"Enter array[2] : ";
    cin>> array[2];

    array[3]=array[1];
    array[1]=array[2];
    array[2]=array[3];

    cout<<endl<<"AFTER SWAPPING array[1] : "<<array[1]<<endl;
    cout<<"AFTER SWAPPING array[2] : "<<array[2];

}