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
    //operator overloading
    void operator ()(float a){
        f1+=a;
    }
};
int main() {
    Myfloat flotty;
    flotty.getValue();

    flotty(1);
    flotty.getValue();
    return 0;
}