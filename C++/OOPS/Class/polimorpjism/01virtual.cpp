#include <iostream>
using namespace std;

class One{
public:
    virtual void intro(){
        cout<< "I am one\n";
    }
};

class Two: public One{
public:
    void intro(){
        cout<< "I am Two\n"; 
    }
};

class Three: public One{
public:
    void intro(){
        cout<< "I am Three\n"; 
    }
};

int main() {
    // One a;
    // Two b;
    // Three c;

    // a.intro();
    // b.intro();
    // c.intro();
// I am one
// I am Two
// I am Three

// but while using the pointers
    One *a;
    Two b;
    Three c;

    a=&b;
    a->intro();

    a=&c;
    a->intro();
    //output when not used virtual keyword:
// I am one
// I am one 
// to solve this issue , we need to make the base class one virtual func
//output :
// I am Two
// I am Three
    return 0;
}