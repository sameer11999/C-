#include<iostream>
using namespace std;
 
 int a[10];
 int b,c;

 void Tic()
 {
    for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
      {
        cout<<"["<<0<<"]";
      }
      cout<<endl;
    }

 }

 void Tac()
 {

  for (int i = 0; i < 1; i++)
  { 
    cin>>b;
    a[i]=b;
  
  }
  
 }

int main()
{

    Tic();
    Tac();
  
  return 0;
}

