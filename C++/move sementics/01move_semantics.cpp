#include <iostream>
using namespace std;

//old method: here a new memory(temp) is created which takes space so rather than using this method we can use move
// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

void swap(int &a,int &b){
    int temp=move(a);
    a = move(b);
    b = move(temp);
}

string printme(){
    return "I am print";
}

int main() {
    int a=1,b=2;
    swap(a,b);
    cout<<"A: "<<a;

    string s = printme(); // here we are having reference of the function;

    string&& ss = printme(); //move sementic


    return 0;
}