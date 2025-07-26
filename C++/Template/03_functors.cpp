#include <iostream>
using namespace std;

class Myfloat{
    float f1;
public:
    Myfloat(){
        f1=0.1;
    }
    void getValue(){
        cout<< f1<<endl;
    }
};
int main() {
    Myfloat flotty;
    flotty.getValue();
    return 0;
}