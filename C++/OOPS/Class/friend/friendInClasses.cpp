#include <iostream>
#include <string>
using namespace std;

class Man{
private:
    string _name;
    int _age;
    Man(){}
    friend class Superman; // now superman class can access private data from base class
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
class Superman: public Man{
    bool flight;
public:
    Superman(string name): Man(name,26){}
    void run(){printf("I can run at light speed %d\n",_age);}
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

    Spiderman peter("peter");
    peter.sayName();
    peter.run();
    return 0;
}