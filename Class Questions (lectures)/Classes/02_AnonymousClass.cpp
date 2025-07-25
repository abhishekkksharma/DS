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

///when two or more than two objects communicate with each oyher we call them Association 
// in Association there is not lifetime dependency 
// there are two types of Association 
//1. composition-

//When two or more than two objects r trying to communicate with each other, it is known as ASSOCIATION...
// **In association, there is no life time dependency.

//TWO TYPES OF ASSOCIATION:

//If container object(composite) doesn't exist then contained object(composed) doesn't exist...COMPOSITION(Car-Engine)
//[In a whole-part relationship, if the whole doesn't exist, the part will cease to exist]
//If container object doesn't exist , contained object can exist...AGGREGATION(College-Student)