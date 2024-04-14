#include<iostream>
using namespace std;

class Vehicle
{   
    public:

    void Company()
    {

        string name="Mahindra";
        string Tyres="MRF";
        cout<<"Name Of Company is : "<<name<<endl;
        cout<<"Name Of Tyres is : "<<Tyres<<endl;

    }

};

class Scorpio : public Vehicle
{
    public:

    void data()
    {
        string colour="GREY";
        int speed=220;
        cout<<"Colour of Scorpio is : "<<colour<<endl;
        cout<<"Speed Of Scorpio is : "<<speed<<endl;

    }

};

class Thar : public Vehicle
{
    public:
    
    void data1()
    {
        
       string colour="RED";
        int speed=180;     
        cout<<"Colour of Thar is : "<<colour<<endl;
        cout<<"Speed Of Thar is : "<<speed<<endl;
    }
};


int main()
{

    Vehicle v;
    v.Company();

    Scorpio s;
    s.data();

    Thar t;
    t.data1();

}