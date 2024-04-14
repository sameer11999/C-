#include<iostream>
#include<fstream>
using namespace std;
 
int main()
{
  
  ofstream obj1;
  string data;

  obj1.open("d:/content.text");
  int count=0;
  cout<<"Enter 5 values : ";

  while (obj1)
  {

    getline(cin, data);
    obj1<<endl<<data<<endl;
    count+=1;

    if (count>=5)
    {
        break;
    }
    
  }
    obj1.close();

  return 0;
}