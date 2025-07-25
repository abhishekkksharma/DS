#include <iostream>
using namespace std;

namespace Banking{
    class Account{
    private:    
        int accountNumber;
        double balance;\
    public:
    // defualt constructors does pass any parameters as below does.

    // constructor (paramiterized constructor):
        Account (int acNo, double initialBalance){ //if the member variables are not initialized, object creation is not possible. 
            accountNumber=acNo;
            balance = initialBalance;
        }    
        void showDetails(){
            cout<< "Account number:"<<accountNumber<<endl;
            cout<<"Balance:"<<balance<<endl;
        }
    };
} // namespace Banking


int main() {
    
    return 0;
}