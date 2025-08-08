#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    friend class Logger;

private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNo, double bal) : accountNumber(accNo), balance(bal) {}
};

class Logger {
public:
    void logAccount(const BankAccount& acc) const {
        cout << "Account " << acc.accountNumber << " has balance: " << acc.balance << endl;
    }
};


int main() {
    BankAccount acc("AX123", 1000.50);
    Logger log;
    log.logAccount(acc);
}

