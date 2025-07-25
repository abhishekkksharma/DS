#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
    int a;
    string b;
    cin>>a;
    cin.ignore();
    getline(cin,b);
    cout<<a<<" "<<b;
    return 0;
}