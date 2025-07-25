#include <iostream>
using namespace std;

int main() {
    int i=10;
    int *ptr;
    ptr=&i;
    cout<<i<<endl;
    cout<<&i<<endl;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;

    int a=3;
    int *b;
    b=&a;
    cout<<"Address of a = "<<&a<<endl;
    cout<<"Address of a = "<<b<<endl;
    cout<<"Address of b = "<<&b<<endl;
    cout<<"Value of b (a's address) = "<<b<<endl;
    cout<<"Value of a = "<<a<<endl;
    cout<<"Address of a (using *b) = "<<*b<<endl;

    //Dynamic pointers:
    
    return 0;
}

/*
types of pointer:
wild pointers
void pointers
dangling pointers
smart pointers
*/