#include<iostream>
using namespace std;
 
int main()
{

   string s="int a;";
   string a;
   
   cout<<"Enter Your String:"<<endl;
   getline(cin, a);

   if(a==s)
   {
        cout<<"valid";
   }

   else{
    cout<<"invalid";
   }
  main();
  return 0;
}