#ifndef ACCOUNT_H
#define ACCOUNT_H
#pragma once
#include <iostream>
#include <string>
using namespace std;

class Account {
    protected:
    int accountNumber;
    string name;
    double balance;
public:
    Account(int accountNumber, string name, double balance){
        this->accountNumber = accountNumber;
        this->name = name;
        this->balance = balance;
    }
    virtual void depositMoney(double balance) =0;
    virtual void withdrawMoney(double balance) =0;
    virtual void getDetails() const = 0;

    int getAccountNumber() const {return accountNumber;}
    virtual ~Account(){}
}; 
#endif  // end of ACCOUNT_H


