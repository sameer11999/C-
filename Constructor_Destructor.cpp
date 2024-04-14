#include<iostream>
using namespace std;

class Student
{
    public:
    int roll_no;
    char name[50];
    double fee;

    Student()
    {
        cout<<"Enter Roll no : "<<endl;
        cin>>roll_no;

        cout<<"Enter your Name : "<<endl;
        cin>>name;

        cout<<"Enter your fee : "<<endl;
        cin>>fee;
    }

    void display()
    {
        cout<<"Roll no. is :" <<roll_no<<endl;
        cout<<"Name is :" <<name<<endl;
        cout<<"Fees is :" <<fee<<endl;

    }

    ~Student()
    {
        cout<<"Deleted";
    }

};

int main()
{
    Student s;
    cout<<endl;
    s.display();

    return 0;
}