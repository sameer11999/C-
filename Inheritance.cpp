#include<iostream>
using namespace std;

class Audi
{

public:

int a;

    int sam(int a)
    {
        a=5000;
        return a ;
    }
    
};

class Q : public Audi
{
    public:

    string model;

    void data() 
    {
        model="Q3";
        cout<<model;
    }

};

int main()
{
    
    Audi AD;
    int catchVar = AD.sam(5000);
    cout<<endl<<catchVar<<endl;
    
    Q q;
    q.data();


    

}
