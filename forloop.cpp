#include<iostream>
using namespace std;

int main()
{

    int a,b;
    cout<<"Enter the value of a:"<<endl;
    cin>>a;

    cout<<"Enter the value of b:"<<endl;
    cin>>b;
    

    int countEven=0,countOdd=0;
    

    for(int i=a;i<=b;i++)


    {
        if(i%2==0)

        {

        cout<<"Even="<<endl<<i<<endl;

        countEven+=1;

        }

        else
        {

        cout<<"Odd="<<endl<<i<<endl;

        countOdd+=1;

        }

    }

    cout<<"EVEN="<<countEven<<endl<<"ODD="<<countOdd<<endl;

    main();
    return 0;


}