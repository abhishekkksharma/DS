#include <iostream>
using namespace std;

class Base{
public:
    void show(){
        cout<<"Inside Base class";
    }
};

class Derived:public Base{
public:
    void show(){
        cout<<"Inside derived class";
    }
};
int main() {
    Base* ptr;
    Derived d1;
    ptr = &d1;
    ptr->show();
    return 0;
}