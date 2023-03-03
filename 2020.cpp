#include<iostream>
using namespace std;


void createaccount()
{
    int accountnumber,openingbalance;
    string customername,accounttype;

    cout<<"account number:"<<endl;
    cin>>accountnumber;

    cout<<"customer name:"<<endl;
    cin>>customername;

    cout<<"select the account type:"<<endl;
    cin>>accounttype;

    cout<<"opening balance:"<<endl;
    cin>>openingbalance;

    
}
void displayaccount()
{
    int accountnumber,openingbalance;
    string customername,accounttype;

    cout<<"account number:"<<endl;
    cin>>accountnumber;

    cout<<"customer name:"<<endl;
    cin>>customername;

    cout<<"select the account type:"<<endl;
    cin>>accounttype;

    cout<<"opening balance:"<<endl;
    cin>>openingbalance;

}
void deposit()
{
    int deposit,openingbalance,availablebalance;
    cout<<"Enter the amount to deposit:"<<endl;
    cin>>deposit;

    availablebalance=openingbalance + deposit;
    cout<<"available balance="<<availablebalance;

}
void withdraw ()
{
    int withdraw,availablebalance,balance;
    cout<<"avilable balance="<<endl;
    cin>>availablebalance;

    cout<<"Enter the amount to Withdraw:"<<endl;
    cin>>withdraw;

    if(availablebalance>withdraw)
    {
       balance= availablebalance-withdraw;
       cout<<"balance="<<balance;
    }
    else
    {
        cout<<"enter the withdraw amount below avilablebalance";
    }
}
void intrest()
{
    int savingaccount,currentaccount,fixeddeposit,availablebalance;
    int select;

    cout<<"select one account="<<endl;
    cout<<"1.saving account"<<endl;
    cout<<"2.current account"<<endl;
    cout<<"3.fixed deposit"<<endl;
    cin>>select;

    cout<<"your available balance="<<availablebalance<<endl;
    cin>>availablebalance;
   if(select==1)
   {
    cout<<"your balance="<<(availablebalance*10);
   }

   else if(select==2)
   {
    cout<<"your balance="<<(availablebalance*8);
   }

   else if(select==3)
   {
    cout<<"your balance="<<(availablebalance*13);
   }

}

int main()
{   
 int select;
 cout<<"--Welcome to amana bank--"<<endl<<endl;
 cout<<"1.Create an account"<<endl;
 cout<<"2.display your account"<<endl;
 cout<<"3.deposit"<<endl;
 cout<<"4.withdrawl"<<endl;
 cout<<"5.check your intrest"<<endl;
 cout<<"6.exit"<<endl;
 cout<<"select a number to operate : " << endl;
 cin>>select;

  switch (select)
  {
    case 1:
        createaccount();
        break;
    
    case 2:
        displayaccount();
        break;
    case 3:
        deposit();
        break;
    case 4:
        withdraw ();
        break;
    case 5:
        intrest();
        break;
    case 6:
        exit(0);
        break;
  
  default:
    break;
  }
 return 0;
}