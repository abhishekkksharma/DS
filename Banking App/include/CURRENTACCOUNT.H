
#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "ACCOUNT.h"

class CurrentAccount : public Account{
public:
    CurrentAccount(int accNo, string name, double bal)
        :Account(accNo,name,bal){}
    void depositMoney(double ammount) override {
        balance +=ammount;
        cout<< "[Current] Deposite: "<<ammount<<", New balance: "<<balance<<endl;
    }
    void withdrawMoney( double ammount) override {
        if(ammount<= balance){
            balance-= ammount;
        }else{
            cout<<"[Current] Insuffiecient balance!"<<endl;
        }
    }
    void getDetails() const override {
        cout<<"\n-- Current Account details -- "<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;
    }

};

#endif