#include<iostream>
using namespace std;


int  arrsnake[100]{};
int counter=0;

void snakeandladder()
{

    for (int i = 0; i < 100 ; i++)
    {
        cout<<arrsnake[i];
    }
    
}

void Reset()
{
    for (int i = 0; i < 100 ; i++)
    {
        arrsnake[i]=0;
    }
    
}

int main()
{
    int x;

    cout<<"Throw Dice : "<<endl;
    cout<<endl<<"* dice should be in 1 to 6 "<<endl;
   
    cin>>x;

    if(x>0 && x<7)
    {

       
        counter+=x;
        arrsnake[counter-1]=1;
        snakeandladder();
        Reset();
        cout<<endl;

    }

    else
    {
        cout<<"Invalid Dice thrown.."<<endl;
    }

    main();

}
