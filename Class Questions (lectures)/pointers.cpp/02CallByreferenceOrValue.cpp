#include <iostream>
using namespace std;
void addByValue(int a,int b){
    a=a+b;
    cout<<"Call by value, Sum:"<<a<<endl;
}
void addByReffrence(int &a1,int &b1){
    a1=a1+b1;
    cout<<"Call by Refference, Sum:"<<a1<<endl;
}

int main() {
    int a=10,b=20;
    addByValue(a,b);

    int x=20,y=30;
    addByReffrence(x,y);
    return 0;
}