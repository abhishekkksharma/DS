#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {
        cout << "Base class show()" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        cout << "Derived class show()" << endl;
    }
};

int main() {
    Base* bptr;
    Derived d;

    bptr = &d;

    bptr->show();  // Calls Derived class show() because show() is virtual in Base

    return 0;
}
