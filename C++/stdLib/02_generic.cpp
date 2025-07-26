#include <iostream>
using namespace std;

template <typename T>
T getBigger(T a, T b){
    return (a>b ? a:b);
}

int main() {
    cout<<getBigger(2.6,5.8)<<endl;
    return 0;
}