#include <iostream>
#include "../include/BANK.H"
#include "../include/SAVINGSACCOUNT.H"
#include "../include/CURRENTACCOUNT.H"
#include "../include/ACCOUNT.H"
using namespace std;

void Bank::showMenu(){
    int choice;
    do
    {
        /* code */
        cout<<"\n===== Welcome to CU bank======\n";
        cout<<"1. Create Account\n";
        cout<<"2. View account Details\n";
        cout<<"3. Deposite\n";
        cout<<"4. Withdraw\n";
        cout<<"5. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch (choice)
        {
        case 1: createAccount(); break;
        case 2: veiwAccount(); break;
        case 3: depositeMoney(); break;
        case 4: withdrawMoney(); break;
        case 5: cout<< "Thank you for using CU bank!\n"; break;
        default:
            cout<<"Invalid option. Try again.\n";
            break;
        }
        
    } while (choice!=5);
    
}

void Bank::createAccount(){
    int accNo,type;
    string name;
    double initialBal;
    cout<<"Enter account Number: ";
    cin>>accNo;
    cout<<"Enter Name: ";
    cin.ignore(); // clear newline
    getline(cin,name);
    cout<<"Enter initial bal: ";
    cin>>initialBal;
    cout<<"Select Account Type:\n1. Savings\n2. Current\nChoice:";
    cin>>type;

    Account* acc=nullptr;
    if(type==1){
        acc = new SavingsAccount(accNo,name,initialBal);
    }else if(type==2){
        acc = new CurrentAccount(accNo,name,initialBal);
    }else{
        cout<<"Invalid Type.\n";
        return;
    }

    accounts.push_back(acc);
    cout<<"Account created successfully";


}
void Bank::veiwAccount(){
    int accNo;
    cout<<"Enter Account Number to view: ";
    cin>>accNo;
    bool found = false;
    //range based loop
    // for(Account* acc: accounts){
    //     if(acc->getAccountNumber() == accNo){
    //         found=true;
    //         break;
    //     }else{
    //         cout<<"Account not found.";
    //     }
    // }
    for (int i = 0; i < accounts.size(); i++){
        if(accounts[i]->getAccountNumber() == accNo){
            accounts[i]->getDetails();
            found=true;
            break;
        }
        
        if(!found){
            cout<<"Account number not found!\n\n";
        }
        
    }
    
}

void Bank::depositeMoney(){
    int accNo;
    double amount;
    bool found=false;
    cout<<"Enter Account Number";
    cin>>accNo;
    for (int i = 0; i < accounts.size(); i++)
    {
        /* code */
        if(accounts[i]->getAccountNumber() == accNo){
            cout<<"Enter Amount to deposite";
            cin>>amount;
            accounts[i]->depositMoney(amount);
            cout<<"Deposit Successfully!\n";
            found = true;
            break;
        }
        if(!found){
            std::cout<<"Account Not Found\n\n";
        }
    }
    
}

void Bank::withdrawMoney(){
    int accNo;
    double amount;
    cout<<"Enter Account number:";
    cin>>accNo;
    bool found = false;
    for(int i=0;i<accounts.size();i++){
        if(accounts[i]->getAccountNumber() == accNo){
            cout<<"Enter Amount to withdraw: ";
            cin>>amount;
            accounts[i]->withdrawMoney(amount);
            cout<<"Withdraw Successfully!\n";
            found = true;
            break;
        }
        if(!found){
            cout<<"Account Not Found\n\n";
        }
    }
}
void Bank::deleteAccount(){
    int accNo;
    double amount;
    cout<<"Enter Account number:";
    cin>>accNo;
    bool found = false;
    for(auto it=accounts.begin();it<accounts.end();it++){
        if((*it)->getAccountNumber() ==  accNo){
            delete *it;
            accounts.erase(it);
            cout<<"Account Deleted Successfully!\n";
            found = true;
            break;
        }
        if(!found){
            cout<<"Account could not be deleted";
        }
    }    
}
Bank::~Bank(){
    for(Account* acc : accounts){
        delete acc;
    }
    accounts.clear();
}
int main() {
    Bank bank;
    bank.showMenu();
    return 0;
}