#include <iostream>
using namespace std;

class A{
private:
    int a;
    friend void show(A& a1);  
protected:
    int b;
public:
    A(int a,int b){
        this->a = a;
        this->b = b;
    }
};
void show(A& a1){
    cout<<a1.a<<" "<<a1.b<<endl;
}
int main() {
    A a2(10,20);
    show(a2);
    return 0;
}

// Difference btw (A& a1) and (A &a1)
// the first one says a1 is of type A
// the second one says that we have the address of object a1

/*Why we have to specify A& al?

Ans: A is a separate user defined datatype and to the show function we can pass any type. we need to tell the compiler that we are passing it using reference and not by value

What is the difference between call by value and call by reference type?

In call by value the original content cannot be modified, whereas in call by reference type we can access and modify the content as well.

Example: website developed by developer

All rights are decided by the developer but a developer can give friend access to admin who can access the content and modify it.
*/