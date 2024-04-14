#include<iostream>
using namespace std;

string n;
string b="@gmail.com";
int counter=10;
bool isvalid = true;

void EMAIL()
{

  for (int i = n.length(); i > 0; i--)
  {
    if(counter>=0)
    {
    
     if (n[i]==b[counter])
     {
       
       counter-=1;
       isvalid = true;

     }

     else
     {

      isvalid = false;

     }
     
  }

  }

  if (isvalid == true)
  {
    cout<<"VALID";
  }
  
  else
  {
    cout<<"INVALID";
  }
}

int main()
{
  cout<<"ENTER YOUR MAIL : ";
  cin>>n;
  EMAIL();
  return 0;
}