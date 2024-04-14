#include<iostream>
using namespace std;

class supermarket
{
    public:

    string food(string a)
    {
        
      return a;

    }
    
    int item(int b)
    {
       return b;
       
    }

    
    int price(int c)
    {
       return c;
    }
};

int main()
{
    supermarket s1;
    string s= s1.food("Eggs");
    int x= s1.item(3);
    int z= s1.price(180);

    cout<< s<<endl;
    cout<< x<<endl;
    cout<< z<<endl;

}
