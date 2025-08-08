#ifndef BANK_H
#define BANK_H
#include <vector>
#include "ACCOUNT.H"

class Bank{
private:
    vector<Account*> accounts;
public:
    void showMenu();
    void createAccount();
    void veiwAccount();
    void depositeMoney();
    void withdrawMoney();
    void deleteAccount();
    ~Bank();
};
#endif