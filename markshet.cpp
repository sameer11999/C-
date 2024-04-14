#include<iostream>
using namespace std;

int main()
{

    int marks;
    int a[10];
    float sum=0;
    float total;
    int st,sub;

    cout<<"Enter the no. of students :"<<endl;
    cin>>st;

    for(int m=0; m<st; m++){

    cout<<"Enter the no. of Subjects : "<<endl;
    cout<<"*  Subject must be 5"<<endl;
    cin>>sub;

    
    cout<<"Enter marks of student : "<< m+1<<endl;
    
    for(int i=0; i<sub; i++)
    {
        cin>>marks;
        if(marks>=100){

            cout<<"Invalid"<<endl;

            exit(0);

        }

        else
        {
           a[i]=marks;
        }
    }

    

    for(int j=0;j<sub;j++)

    {

        cout<<"["<<a[j]<<"]";
        sum=sum+a[j];

    }
    cout<<endl<<"Total marks of student is : "<<endl;
    cout<<sum<<endl;
    
    total=sum/500*100;

    cout<<"Percentage : "<<total<<endl;
    cout<<total<<endl;

    if(total<35)
    {
        cout<<"FAILED"<<endl;
    }

    else if(total>=35 && total<=70)
    {
        cout<<"PASSED"<<endl;
    }

    else{
        cout<<"DISTINCTION"<<endl;
    }
    
    sum=0;
    total=0;
    
    cout<<endl;

    }
}

//     cout<<"---------**********---------"<<endl;

//     cout<<"Enter marks of 2nd students : "<<endl;
    
//     for(int i=0; i<sub; i++)
//     {
//         cin>>marks;
//         if(marks>=100){

//             cout<<"Invalid"<<endl;
//             exit(0);
//         }
//         else{
        
//         a[i]=marks;
//         }
//     }

//     for(int j=0;j<sub;j++)

//     {

//         cout<<"["<<a[j]<<"]";
//        sum=sum+a[j];

//     }
//     cout<<endl<<"Total marks of 2nd students is : "<<endl;
//     cout<<sum<<endl;

//     total=sum/500*100;

//     cout<<"Percentage : "<<total<<endl;
//     cout<<total<<endl;

//     if(total<35)
//     {
//         cout<<"FAILED"<<endl;
//     }

//     else if(total>=35 && total<=70)
//     {
//         cout<<"PASSED"<<endl;
//     }

//     else{
//         cout<<"DISTINCTION"<<endl;
//     }

//     sum=0;
//     total=0; 
    
//     cout<<"---------**********---------"<<endl;

//     cout<<"Enter marks of 3rd students : "<<endl;
    
//     for(int i=0; i<sub; i++)
//     {
//          cin>>marks;
//         if(marks>=100){

//             cout<<"Invalid"<<endl;
//             exit(0);
//         }

//         else{
       
//         a[i]=marks;
//         }
//     }

//     for(int j=0;j<sub;j++)

//     {
//        cout<<"["<<a[j]<<"]";
//        sum=sum+a[j];
//     }

//     cout<<endl<<"Total marks of 3rd students is : "<<endl;
//     cout<<sum<<endl;

//     total=sum/500*100;

//     cout<<"Percentage : "<<total<<endl;
//     cout<<total<<endl;

//     if(total<35)
//     {
//         cout<<"FAILED"<<endl;
//     }

//     else if(total>=35 && total<=70)
//     {
//         cout<<"PASSED"<<endl;
//     }

//     else{
//         cout<<"DISTINCTION"<<endl;
//     }

// return 0;

// }