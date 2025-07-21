#include <iostream>
using namespace std;

namespace App{
    namespace Banking{
        void greet(){
            cout<< "Welcome to the banking App!"<<endl;
        }
    }
}
//namespace aliasing:
namespace RBI{
    void rules(){
        cout<<"follow RBI guidelines."<<endl;
    }
}

namespace central= RBI; //alias



//3. Anonymous Namespace(used to hide details in this file)

namespace{
    int secretCode = 1234;
    void displaySecret(){
        cout<<"Secret code:"<<secretCode<<endl;
    }
}
int main() {
    App::Banking::greet();
    central::rules();
    displaySecret(); // Accessible
    secretCode++; // Accessible
    
    return 0;
}

// using declaration vs Using Directive

// using Declaration (recommended)
// using std::cout;
// using std::endl;

// cout<<"hello!"<endl;
