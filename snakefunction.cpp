#include<iostream>
using namespace std;

int arrsnake[100]{};
int counter=0;

void Snakeandladder()
{

     for(int i=0; i<100; i++)

    {

     cout<<arrsnake[i];   

    }

}

void Reset()
{

    for(int i=0; i<100; i++)

    {
        
      arrsnake[i]=0;      

    }

}

int x;

int main()
{
    cout<<endl<<"Throw Dice : ";
    cin>>x;
    counter+=x;
    Reset();
    arrsnake[counter -1] = 1;
    Snakeandladder();
    
    main();
}

