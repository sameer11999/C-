#include<iostream>
using namespace std;


int a;

struct Phonebook
{
    public:
    double Mob_no;
    string Contact_name;
};

 Phonebook sam[10];

void Search()
{
    string name;
    cout<<"Enter Contact you want to search : "<<endl;
    cin>>name;

    // bool t=true;
    for (int i = 0; i < a; i++)
    {
        
        if (sam[i].Contact_name==name)
        {
            cout<<"Valid";
        }

        else
        {
             cout<<"InValid";
        }
        
    }
   
}
    
int main()
{

int c;

cout<<"Enter your choice : "<<endl;

cout<<"1.Save Your Contacts"<<endl;
cout<<"2.Search Your Contacts"<<endl;
cout<<"3.Edit Your Contacts"<<endl;\

cin>>c;

switch (c)
{
case 1:

  
    cout<<"Enter Number of Contacts : "<<endl;
    cin>>a;

    for (int i = 0; i < a; i++)
    {
    
    cout<<"Enter Contact Name : "<<endl;
    cin>>sam[i].Contact_name;

    cout<<"Enter Mobile Number : "<<endl;
    cin>>sam[i].Mob_no;

    cout<<"Contact name :" <<sam[i].Contact_name<<endl;
    cout<<"Contact Number :"<<sam[i].Mob_no<<endl;

    cout<<"****You Save Your Contacts****"<<endl;

    }
   
   case 2:

   Search();

}

    main();
    return 0;
}