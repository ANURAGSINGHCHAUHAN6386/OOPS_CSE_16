#include<bits/stdc++.h>
using namespace std;
 class Bank{
    private:
    int account_number;
    string account_holderName;
    double balance;
    public:
      void createAccount(){
        cout<<"Enter Account Number:";
        cin>>account_number;

        cout<<"Enter Account Holder Name:";
        cin>>account_holderName;

        cout<<"Enter the initial balance:";
        cin>>balance;

      }
      void deposit(){
        double amount;
        cout<<"Enter amount  to deposit:";
        cin>>amount;
        if(amount>0){
            balance+=amount;
            cout<<"Amount deposited successfully.\n";

        }
        else
        {
            cout<<"Invalid amount!";

        }
      }
      //withdrawl function
      void withdraw(){
        double amount;
        cout<<"Enter amount to withdraw:";
        cin>>amount;
        if(amount>0&&amount<=balance){
            balance-=amount;
            cout<<"Amount Withdrawn successfully.";

        }
        else{
            cout<<"Invalid amount or insufficient balance!";
        }

      }

      void display(){
        cout<<"Account Number:"<<account_number<<endl;
        cout<<"Account Holder name:"<<account_holderName<<endl;
        cout<<"Balance:"<<balance<<endl;

      }
     };
     int main(){
         Bank account;
          int choice;

          account.createAccount();
          do{
            cout<<"\n---Banking System Menu---\n";
            cout<<"1. Deposit\n";
            cout<<"2. Withdraw\n";
            cout<<"3. Display Account Details\n";
            cout<<"4. Exit\n";
            cout<<"Enter your choice:";
            cin>>choice;
            switch(choice){
                case 1:
                account.deposit();
                break;
                case 2:
                account.withdraw();
                break;
                case 3:
                account.display();
                break;
                case 4:
                cout<<"Thankyou for using the banking system,";
                break;
                default:
                cout<<"Invalid choice! Please try again.\n"; 
          }
     }
     while(choice!=4);
     return 0;

    

 }