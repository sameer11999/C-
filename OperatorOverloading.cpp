#include<iostream>
using namespace std;

class Science
{
    public:
    int x,y;

    Science operator+(Science s)
    {

        Science result;
        result.x=x+s.x;
        result.y=y+s.y;

        return result;

    }
};

int main()
{

    Science a1,a2,a3;

    a1.x=10;
    a1.y=40;

    a2.x=20;
    a2.y=30;

    a3=a1+a2;

    cout<<a3.x<<endl;
    cout<<a3.y<<endl;

    return 0;

}