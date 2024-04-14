#include<iostream>
using namespace std;

int main()
{

    int array[4]{1,2,3,4};
    int sam[5];

    for(int i=0; i<=3; i++)

    {

     sam[i]=array[i];
     cout<<sam[i]<<endl;
    
    }

    for (int j = 0; j <= 3; j++)
    {
       cout<<endl<<array[j];

    }
    

}