#include <iostream>
using namespace std;

class A{
private:
    int a=10;
public:
    int show(){
        return a;
    }
};
int main() {
    A a1;
    cout << a1.show();
    return 0;
}