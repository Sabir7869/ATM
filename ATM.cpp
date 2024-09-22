#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class atm{
    private:
    long int acount_No;
    string name;
    int PIN;
    double balance;
    string mobile_No;
    public:
    void setData(long int account_No_a ,string name_a ,int PIN_a , string mobile_No_a,double balance_a){
        acount_No=account_No_a;
        name=name_a;
        PIN=PIN_a;
        mobile_No=mobile_No_a;
        balance=balance_a;
    }
    long int getAccountNo(){
        return acount_No;
    }
    string getName(){
        return name;
    }
    int getPIN(){
        return PIN;
    }
    string getMobileNo(){
        return mobile_No;
    }
    double getBalance(){
        return balance;
    }
    void setMobileNo(string mob_prev,string mob_new){
        if(mob_prev==mobile_No){
            mobile_No=mob_new;
            cout<<"Mobile No. Updated Successfully"<<endl;
        }
        else{
            cout<<"Mobile No. Not Updated"<<endl;
        }
    }
    void cashWithdraw(int amount){
        if(amount>0 && amount<balance){
            balance=balance-amount;
            cout<<"Collect Your Cash"<<endl;
            _getch();
        }
        else{
            cout<<"Insufficient Balance"<<endl;
        }
    }
};
 int main()
{
    int choice = 0 , enterPIN;
    long int enterAccountNo;
    system("cls");
    atm a1;
    a1.setData(123456789,"sabir",1234,"8318425909",100000);
    do{
        system("cls");
        cout<<"Enter Account No."<<endl;
        cin>>enterAccountNo;
        cout<<"Enter PIN"<<endl;
        cin>>enterPIN;
        if(enterAccountNo==a1.getAccountNo() && enterPIN==a1.getPIN()){
            do{
                int amount = 0;
                string oldMobileNO,newMobileNo;
                system("cls");
                cout<<"1. Check Balance"<<endl;
                cout<<"2. Cash Withdraw"<<endl;
                cout<<"3. Show Account Details"<<endl;
                cout<<"4. Update Mobile No."<<endl;
                cout<<"5. Exit"<<endl;
                cout<<"Enter Your Choice"<<endl;
                cin>>choice;
                switch(choice){
                    case 1:
                    cout<<"Your Account Balance is: "<<a1.getBalance()<<endl;
                    _getch();
                    break;
                    case 2:
                    cout<<"Enter Amount to Withdraw"<<endl;
                    cin>>amount;
                    a1.cashWithdraw(amount);
                    break;
                    case 3:
                    cout<<"Account No. : "<<a1.getAccountNo()<<endl;
                    cout<<"Name : "<<a1.getName()<<endl;
                    cout<<"Mobile No. : "<<a1.getMobileNo()<<endl;
                    cout<<"Balance : "<<a1.getBalance()<<endl;
                    _getch();
                    break;
                    case 4:
                    cout<<"Enter Old Mobile No."<<endl;
                    cin>>oldMobileNO;
                    cout<<"Enter New Mobile No."<<endl;
                    cin>>newMobileNo;
                    a1.setMobileNo(oldMobileNO,newMobileNo);
                    _getch();
                    break;
                    case 5:
                    exit(0);
                    break;
                    default:
                    cout<<"Enter Valid Choice"<<endl;
                    _getch();
                }
            }while(1);
        }
    }while(1);
return 0;
}