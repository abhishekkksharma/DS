#include <iostream>
using namespace std;

class StaticClass{
    static int count;
    int a = 100;
public:
    StaticClass(){
        count++;
    }
    static void show(){
        staticFunction();
    }
    static void staticFunction(){
        cout<<count<<" "<< a <<endl;
    }

};
int StaticClass::count=0;


int main() {
    StaticClass sc1;
    StaticClass::staticFunction();

    StaticClass sc2;
    StaticClass::staticFunction();

    StaticClass sc3;
    StaticClass::staticFunction();
    return 0;
}