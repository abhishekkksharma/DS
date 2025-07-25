#include <iostream>
using namespace std;

namespace Banking{
    void display(){
        cout<< "banking system display"<<endl;
    }
}

namespace Shopping{
    void display(){
        cout<< "Shopping cart display"<<endl;
    }
}


int main(){
    Banking::display();
    Shopping::display();
    return 0;
}
