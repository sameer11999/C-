#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ifstream obj1;
    string data;
    string in;

    obj1.open("d:/pass.text");
    cout<<"Enter your password :";
    cin>>in;


    while (getline(obj1, data))
    {
       

     if (data==in)
    {
        cout<<"Correct Password";
        break;
       
    }

    else
    {
        cout<<"You have Entered Wrong Password";
        break;
    }

    }

  obj1.close();
  return 0;
}