#include <iostream>
#include <string>
using namespace std;

class Money{
public:
    void gotmoney(){puts("I got 5k USD in my account");}
};

class Man{
private:
    string _name;
    int _age;
    Man(){}
protected:
    Man(const string & name, const int &age)
    : _name(name),_age(age){}
    void run(){puts("I acn run");}
public:
    void sayName() const;
};

void Man::sayName() const{
    cout<< "my name is:" <<_name<< " and age is:"<<_age <<endl;
}

// superman

// multiple inheritence 
class Superman: public Man , public Money{ // derived to classes 
    bool flight;
public:
    Superman(string name): Man(name,26){}
    void run(){puts("I can run at light speed");}
};
class Spiderman: public Man{
    bool flight;
public:
    Spiderman(string name): Man(name,19){}
    void run(){puts("I can run at normal speed");}
};

int main() {
    Superman clark("kent");
    clark.sayName();
    clark.run();
    clark.gotmoney();

    Spiderman peter("peter");
    peter.sayName();
    peter.run();
    return 0;
}