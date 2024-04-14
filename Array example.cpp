#include<iostream>
using namespace std;

int main(){

    int a[10];

    for(int i=0; i<=8;i++){

            a[i]=i;

            cout<<a[i]<<endl;

    }
    a[20]=99;
    
    cout<<a[20];
    
    return 0;
}
