#include <iostream>
using namespace std;

int main() {
    []{cout<<"Hello, learning lambda.\n";}();
    [](){return 100;}; // while returning anyvalue the barckets are put just after the sq brackets.

    auto sum = [](auto a, auto b){return a+b;};

    cout<< "sum of 2 and 5 is:"<<sum(2,5)<<endl;
    cout<< "sum of 2.5 and 5.5 is:"<<sum(2.5,5.5)<<endl;

    string a = "abc";
    string b = "def";
    cout<<sum(a,b)<<endl;
    return 0;
}