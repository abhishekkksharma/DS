#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include <string>
#include "ACCOUNT.h"

class SavingsAccount : public Account{
public:
    SavingsAccount(int accNo, string name, double bal)
        :Account(accNo,name,bal){}
    void depositMoney(double ammount) override {
        balance +=ammount;
        cout<< "[Savings] Deposite: "<<ammount<<", New balance: "<<balance<<endl;
    }
    void withdrawMoney( double ammount) override {
        if(ammount<= balance){
            balance-= ammount;
        }else{
            cout<<"[Savings] Insuffiecient balance!"<<endl;
        }
    }
    void getDetails() const override {
        cout<<"\n-- Savings Account details -- "<<endl;
        cout<<"Account Number: "<<accountNumber<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Balance: "<<balance<<endl;

    }

};

#endif