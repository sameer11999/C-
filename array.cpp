#include<iostream>
using namespace std;

int main()
{

    int a[10];
    int b;

    cout<<"Enter the values="<<endl;
    
    for(int i=0;i<6;i++)
    {
        cin>>b;
        a[i]=b;
    }

    cout<<"----------------------------"<<endl;

    for(int j=0;j<6;j++)
    {

        cout<<"["<<a[j]<<"]";

    }

    cout<<endl<<"----------------------------"<<endl;

    cout<<"Enter the index u want : "<<endl;

    cin>>b;

    if(b<0 || b>6)
    {

        cout<<"Invalid Index "<<endl;

    }

    else
    {
        cout<<"Your index value is : "<<endl;
        cout<<a[b]<<endl;
    }

    main();

   return 0;

}