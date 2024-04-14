#include<iostream>
#include<fstream>
using namespace std;
 
 
int main()
{
  
  ofstream obj1;
  string data;

  obj1.open("d:/pass.text");
  int count=0;
 cout<<"Set Your Password :";

  while (obj1)
  {

    getline(cin, data);
    obj1<<data<<endl;
    count+=1;

    if (count==1)
    {
        break;
    }
    
  }
    obj1.close();

  return 0;
}
