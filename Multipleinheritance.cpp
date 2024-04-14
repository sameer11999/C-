#include<iostream>
using namespace std;

class account
{
    private:
        string name;
        int acc_no;
        string acc_type;
    
    public:
        void Get_accountdetails()
        {
            cout<<"Enter Customer Name : "<<endl;
            cin>>name;

            cout<<"Enter  Account Number : "<<endl;
            cin>>acc_no;

            cout<<"Enter  Account Type : "<<endl;
            cin>>acc_type;
        }

        void displayDetails()
        {
            cout<<"Customer Name"<<name<<endl;
            cout<<"Account Number"<<acc_no<<endl;
            cout<<"Account Type"<<acc_type<<endl;
        }
};

class Current_Account : public account
{
    private:
        float balance=10000;
    
    public:
        void c_display()
        {
            cout<<"\n Balance : "<<balance;
        }

         void c_deposite()
        {
            float Deposite;
            cout<<"\n Enter amount to deposite : ";
            cin>>Deposite;

            balance+=Deposite;
        }

         void c_withdraw()
        {
            float Withdraw;
            cout<<"\n Enter amount to withdraw : ";
            cin>>Withdraw;

                balance-=Withdraw;
                cout<<"\n Balance Amount after withdraw : "<<balance;


     }

};

class Saving_Account : public account
{
    private:
        float sav_balance;
    
    public:
        void s_display()
        {
            cout<<"\n Balance : "<<sav_balance;
        }

         void s_deposite()
        {
            float Deposite,Interest;
            cout<<"\n Enter amount to deposite : ";
            cin>>Deposite;

            sav_balance += Deposite;
            Interest=(sav_balance*2)/100;
            sav_balance=sav_balance+Interest;
        }

         void s_withdraw()
        {
            float Withdraw;
            cout<<"\n Enter amount to withdraw : ";
            cin>>Withdraw;

            if(sav_balance > 500)
            {
                sav_balance-=Withdraw;
                cout<<"\n Balance Amount after withdraw : "<<sav_balance;
            }

            else
            {
                cout<<"\n Insufficient Balance : ";
            }

     }

};


int main()
{
    Current_Account c1;
    Saving_Account s1;
    char type;
    cout<<"\nEnter S for saving customer and C for current a/c customer : ";
    cin>>type;
    int choice;
    if(type=='s' || type=='S')
    {
        s1.Get_accountdetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                s1.s_deposite();
                break;
            case 2 :
                s1.s_withdraw();
                break;
            case 3 :
                s1.s_display();
                break;
            case 4 :
                s1.displayDetails();
                s1.s_display();
                break;
            case 5 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else if(type=='c' || type=='C')
    {
        c1.Get_accountdetails();
        while(1)
        {
            cout<<"\nChoose Your Choice"<<endl;
            cout<<"1)   Deposit"<<endl;
            cout<<"2)   Withdraw"<<endl;
            cout<<"3)   Display Balance"<<endl;
            cout<<"4)   Display with full Details"<<endl;
            cout<<"5)   Exit"<<endl;
            cout<<"Enter Your choice: ";
            cin>>choice;
            switch(choice)
            {
            case 1 :
                c1.c_deposite();
                break;
            case 2 :
                c1.c_withdraw();
                break;
            case 3 :
                c1.c_display();
                break;
            case 4 :
                c1.displayDetails();
                c1.c_display();
                break;
            case 5 :
                goto end;
            default:
                cout<<"\n\nEntered choice is invalid,\"TRY AGAIN\"";
            }
        }
    }
    else
    {
        cout<<"\nInvalid Account Selection";
    }
end:
    cout<<"\nThank You for Banking with us..";
    return 0;
}
 