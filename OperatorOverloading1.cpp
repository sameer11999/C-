#include<iostream>
using namespace std;

class Book
{
    public:
    int a,c;

    Book operator-(Book b)
    {
        Book result;
        result.a=a-b.a;
        result.c=c-b.c;
        return result;
    }
};

int main()
{
    Book x1,x2,x3;
    x1.a=20;
    x1.c=40;

    x2.a=10;
    x2.c=30;

    x3=x1-x2;

    cout<<x3.a<<endl;
    cout<<x3.c;

    return 0;
}