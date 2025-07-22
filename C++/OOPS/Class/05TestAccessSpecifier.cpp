#include <iostream>
using namespace std;

class A{
private:
    int a=10;
public:
    int b=200;
    int show(){
        return a;
    }
protected:
    int c=34;
};


class B: public A{
    void display(){
        cout<<c;
    }
};

int main() {
    A a1;
    cout << a1.show()<<endl;
    cout<< a1.b<<endl;
    
    return 0;
}