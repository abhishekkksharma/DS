#include <iostream>
using namespace std;
class{
    int a,b;
public:
    void setData(int a,int b){
        this->a=a;
        this->b=b;
    }
    void getData(){
        cout<<a<<endl<<b<<endl;
    }
}obj1;

int main() {
    obj1.setData(1,2);
    obj1.getData();
    return 0;
}