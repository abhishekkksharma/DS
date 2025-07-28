#include <iostream>
using namespace std;

class A{
    static int a;
public:
    static void countobject(){
        a++;
        cout<<a<<endl;
    }
};

int A::a=0;
int main() {
    A a1,a2,a3,a4;
    a1.countobject();
    a2.countobject();
    a3.countobject();
    a4.countobject();
    return 0;
}