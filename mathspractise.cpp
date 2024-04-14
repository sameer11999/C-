#include<iostream>
using namespace std;

int main(){

    int Calc;
    int a,b,h,r;
    int pi=3.14;

    cout<<"Enter your choice : "<<endl;
    cout<<"1.Square"<<endl;
    cout<<"2.Rectangle"<<endl;
    cout<<"3.Triangle"<<endl;
    cout<<"4.Circle"<<endl;
    cout<<"5.Ellipse"<<endl;
    

    cin>>Calc;

    switch(Calc)
    {
        case 1:
            cout<<"Enter a : "<<endl;
            cin>>a;
            cout<<"Square is : "<<a*a<<endl;
            cout<<endl;
             

        break;

        case 2:
            cout<<"Enter Breadth and Height : "<<endl;
            cin>>b>>h;
            cout<<"Rectangle is : "<<b*h<<endl;
            cout<<endl;
             
        break;

        case 3:
            cout<<"Enter Breadth and Height : "<<endl;
            cin>>b>>h;
            cout<<"Triangle is : "<<b*h*1/2<<endl;
            cout<<endl;
             

        break;

        case 4:
            cout<<"Enter Radius : "<<endl; 
            cin>>r;
            cout<<"Circle is : "<<pi*r*r<<endl;
            cout<<endl;
             

        break;

        case 5:
            cout<<"Enter a and b : "<<endl;
            cin>>a>>b;
            cout<<"Ellipse is : "<<pi*a*b<<endl;
            cout<<endl;
             

        break;


        default:

            cout<<"You have given Invalid input"<<endl;

        break;

    }

    main();

    return(0);

}