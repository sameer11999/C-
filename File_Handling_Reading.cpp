#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ifstream obj1;
    string data;

    obj1.open("d:/content.text");


    while (getline(obj1, data))
    {
       cout<<endl<<data;
    }
    

  obj1.close();
  return 0;
}